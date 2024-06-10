//Bing

module output_display_array (
    input clk_cache,
    input clk_vga, //74.250 MHz
    input h_sync,
    input v_sync,
    input [9:0] row,
    input [10:0] col,
    output [11:0] rgb_720p
);

    //Score 24 * 224
    //Board 248 * 224
    //Level 16 * 224
    wire board_ready;
    reg [7:0] board_px_row_counter = 8'd0;
    reg [7:0] board_px_col_counter = 8'd0;
    always @(posedge clk_cache) begin
        if (board_ready == 1'b1 & row >= 10'd720) begin
            if (board_px_col_counter == 8'd223) begin
                board_px_col_counter <= 8'd0;
                if (board_px_row_counter == 8'd247) begin
                    board_px_row_counter <= 8'd0;
                end
                else begin
                    board_px_row_counter <= board_px_row_counter + 8'd1;
                end
            end
            else begin
                board_px_col_counter <= board_px_col_counter + 8'd1;
            end
        end
        else begin
            board_px_col_counter <= 8'd0;
            board_px_row_counter <= 8'd0;
        end
    end

    wire [11:0] board_rgb;
    board_display_cache (
        .clk_cache(clk_cache),
        .px_row(board_px_row_counter),
        .px_col(board_px_col_counter),
        .ready(board_ready),
        .rgb_720p(board_rgb)
    );

    //Read Cache and Scale
    (*ram_style = "distributed"*) reg [11:0] rgb[0:64511];
    reg [11:0] rgb_out;
    wire write_en = board_ready == 1'b1 & row >= 10'd720 ? 1'b1 : 1'b0;
    wire read_en = row < 10'd720 & col < 11'd1280 ? 1'b1 : 1'b0;
    wire clk_mem = write_en == 1'b1 ? clk_cache : clk_vga;
    always @(posedge clk_mem) begin
        if (write_en) begin
            rgb[(24 + board_px_row_counter)*224 + board_px_col_counter] <= board_rgb;
        end
        else if (read_en) begin
            rgb_out <= rgb[row*224 + col];
        end
        else begin
            rgb_out <= 12'h000;
        end
    end
    
    always @(posedge clk_vga) begin
        if 
    end

    assign rgb_720p = rgb_out;


endmodule
