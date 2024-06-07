//
//  Tile Decimal to Binary.cpp
//  
//
//  Created by cookieeikooc on 2024/5/15.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (fin.fail()) {
        cout << "Failed to open input file.";
        exit(1);
    }
    else if (fout.fail()) {
        cout << "Failed to open output file.";
        exit(1);
    }

    int num;
    while (!fin.eof()) {
        fin >> num;
        switch (num) {
            case 0:
                fout << "000000";
                break;
            case 1:
                fout << "000001";
                break;
            case 2:
                fout << "000010";
                break;
            case 3:
                fout << "000011";
                break;
            case 4:
                fout << "000100";
                break;
            case 5:
                fout << "000101";
                break;
            case 6:
                fout << "000110";
                break;
            case 7:
                fout << "000111";
                break;
            case 8:
                fout << "001000";
                break;
            case 9:
                fout << "001001";
                break;
            case 10:
                fout << "001010";
                break;
            case 11:
                fout << "001011";
                break;
            case 12:
                fout << "001100";
                break;
            case 13:
                fout << "001101";
                break;
            case 14:
                fout << "001110";
                break;
            case 15:
                fout << "001111";
                break;
            case 16:
                fout << "010000";
                break;
            case 17:
                fout << "010001";
                break;
            case 18:
                fout << "010010";
                break;
            case 19:
                fout << "010011";
                break;
            case 20:
                fout << "010100";
                break;
            case 21:
                fout << "010101";
                break;
            case 22:
                fout << "010110";
                break;
            case 23:
                fout << "010111";
                break;
            case 24:
                fout << "011000";
                break;
            case 25:
                fout << "011001";
                break;
            case 26:
                fout << "011010";
                break;
            case 27:
                fout << "011011";
                break;
            case 28:
                fout << "011100";
                break;
            case 29:
                fout << "011101";
                break;
            case 30:
                fout << "011110";
                break;
            case 31:
                fout << "011111";
                break;
            case 32:
                fout << "100000";
                break;
            case 33:
                fout << "100001";
                break;
        }
    }
    
    fin.close();
    fout.close();
    return 0;
}

/*
Before:

09 29 29 29 29 29 29 29 29 29 29 29 29 18 17 29 29 29 29 29 29 29 29 29 29 29 29 10
31 00 00 00 00 00 00 00 00 00 00 00 00 27 28 00 00 00 00 00 00 00 00 00 00 00 00 32
31 00 01 25 25 02 00 01 25 25 25 02 00 27 28 00 01 25 25 25 02 00 01 25 25 02 00 32
31 00 27 00 00 28 00 27 00 00 00 28 00 27 28 00 27 00 00 00 28 00 27 00 00 28 00 32
31 00 03 26 26 04 00 03 26 26 26 04 00 03 04 00 03 26 26 26 04 00 03 26 26 04 00 32
31 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32
31 00 01 25 25 02 00 01 02 00 01 25 25 25 25 25 25 02 00 01 02 00 01 25 25 02 00 32
31 00 03 26 26 04 00 27 28 00 03 26 26 06 05 26 26 04 00 27 28 00 03 26 26 04 00 32
31 00 00 00 00 00 00 27 28 00 00 00 00 27 28 00 00 00 00 27 28 00 00 00 00 00 00 32
11 30 30 30 30 02 00 27 07 25 25 02 00 27 28 00 01 25 25 08 28 00 01 30 30 30 30 12
00 00 00 00 00 31 00 27 05 26 26 04 00 03 04 00 03 26 26 06 28 00 32 00 00 00 00 00
00 00 00 00 00 31 00 27 28 00 00 00 00 00 00 00 00 00 00 27 28 00 32 00 00 00 00 00
00 00 00 00 00 31 00 27 28 00 13 30 24 33 33 23 30 14 00 27 28 00 32 00 00 00 00 00
29 29 29 29 29 04 00 03 04 00 32 00 00 00 00 00 00 31 00 03 04 00 03 29 29 29 29 29
00 00 00 00 00 00 00 00 00 00 32 00 00 00 00 00 00 31 00 00 00 00 00 00 00 00 00 00
30 30 30 30 30 02 00 01 02 00 32 00 00 00 00 00 00 31 00 01 02 00 01 30 30 30 30 30
00 00 00 00 00 31 00 27 28 00 15 29 29 29 29 29 29 16 00 27 28 00 32 00 00 00 00 00
00 00 00 00 00 31 00 27 28 00 00 00 00 00 00 00 00 16 00 27 28 00 32 00 00 00 00 00
00 00 00 00 00 31 00 27 28 00 01 25 25 25 25 25 25 02 00 27 28 00 32 00 00 00 00 00
09 29 29 29 29 04 00 03 04 00 03 26 26 06 05 26 26 04 00 03 04 00 03 29 29 29 29 10
31 00 00 00 00 00 00 00 00 00 00 00 00 27 28 00 00 00 00 00 00 00 00 00 00 00 00 32
31 00 01 25 25 02 00 01 25 25 25 02 00 27 28 00 01 25 25 25 02 00 01 25 25 01 00 32
31 00 03 26 06 28 00 03 26 26 26 04 00 03 04 00 03 26 26 26 04 00 27 05 26 04 00 32
31 00 00 00 27 28 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 27 28 00 00 00 32
21 25 02 00 27 28 00 01 02 00 01 25 25 25 25 25 25 02 00 01 02 00 27 28 00 01 25 22
19 26 04 00 03 04 00 27 28 00 03 26 26 06 05 26 26 04 00 27 28 00 03 04 00 03 26 20
31 00 00 00 00 00 00 27 28 00 00 00 00 27 28 00 00 00 00 27 28 00 00 00 00 00 00 32
31 00 01 25 25 25 25 08 07 25 25 02 00 27 28 00 01 25 25 08 07 25 25 25 25 02 00 32
31 00 03 26 26 26 26 26 26 26 26 04 00 03 04 00 03 26 26 26 26 26 26 26 26 04 00 32
31 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32
11 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 12

After:

001001 011101 011101 011101 011101 011101 011101 011101 011101 011101 011101 011101 011101 010010 010001 011101 011101 011101 011101 011101 011101 011101 011101 011101 011101 011101 011101 001010
011111 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 011011 011100 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 100000
011111 000000 000001 011001 011001 000010 000000 000001 011001 011001 011001 000010 000000 011011 011100 000000 000001 011001 011001 011001 000010 000000 000001 011001 011001 000010 000000 100000
011111 000000 011011 000000 000000 011100 000000 011011 000000 000000 000000 011100 000000 011011 011100 000000 011011 000000 000000 000000 011100 000000 011011 000000 000000 011100 000000 100000
011111 000000 000011 011010 011010 000100 000000 000011 011010 011010 011010 000100 000000 000011 000100 000000 000011 011010 011010 011010 000100 000000 000011 011010 011010 000100 000000 100000
011111 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 100000
011111 000000 000001 011001 011001 000010 000000 000001 000010 000000 000001 011001 011001 011001 011001 011001 011001 000010 000000 000001 000010 000000 000001 011001 011001 000010 000000 100000
011111 000000 000011 011010 011010 000100 000000 011011 011100 000000 000011 011010 011010 000110 000101 011010 011010 000100 000000 011011 011100 000000 000011 011010 011010 000100 000000 100000
011111 000000 000000 000000 000000 000000 000000 011011 011100 000000 000000 000000 000000 011011 011100 000000 000000 000000 000000 011011 011100 000000 000000 000000 000000 000000 000000 100000
001011 011110 011110 011110 011110 000010 000000 011011 000111 011001 011001 000010 000000 011011 011100 000000 000001 011001 011001 001000 011100 000000 000001 011110 011110 011110 011110 001100
000000 000000 000000 000000 000000 011111 000000 011011 000101 011010 011010 000100 000000 000011 000100 000000 000011 011010 011010 000110 011100 000000 100000 000000 000000 000000 000000 000000
000000 000000 000000 000000 000000 011111 000000 011011 011100 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 011011 011100 000000 100000 000000 000000 000000 000000 000000
000000 000000 000000 000000 000000 011111 000000 011011 011100 000000 001101 011110 011000 100001 100001 010111 011110 001110 000000 011011 011100 000000 100000 000000 000000 000000 000000 000000
011101 011101 011101 011101 011101 000100 000000 000011 000100 000000 100000 000000 000000 000000 000000 000000 000000 011111 000000 000011 000100 000000 000011 011101 011101 011101 011101 011101
000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 100000 000000 000000 000000 000000 000000 000000 011111 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000
011110 011110 011110 011110 011110 000010 000000 000001 000010 000000 100000 000000 000000 000000 000000 000000 000000 011111 000000 000001 000010 000000 000001 011110 011110 011110 011110 011110
000000 000000 000000 000000 000000 011111 000000 011011 011100 000000 001111 011101 011101 011101 011101 011101 011101 010000 000000 011011 011100 000000 100000 000000 000000 000000 000000 000000
000000 000000 000000 000000 000000 011111 000000 011011 011100 000000 000000 000000 000000 000000 000000 000000 000000 010000 000000 011011 011100 000000 100000 000000 000000 000000 000000 000000
000000 000000 000000 000000 000000 011111 000000 011011 011100 000000 000001 011001 011001 011001 011001 011001 011001 000010 000000 011011 011100 000000 100000 000000 000000 000000 000000 000000
001001 011101 011101 011101 011101 000100 000000 000011 000100 000000 000011 011010 011010 000110 000101 011010 011010 000100 000000 000011 000100 000000 000011 011101 011101 011101 011101 001010
011111 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 011011 011100 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 100000
011111 000000 000001 011001 011001 000010 000000 000001 011001 011001 011001 000010 000000 011011 011100 000000 000001 011001 011001 011001 000010 000000 000001 011001 011001 000001 000000 100000
011111 000000 000011 011010 000110 011100 000000 000011 011010 011010 011010 000100 000000 000011 000100 000000 000011 011010 011010 011010 000100 000000 011011 000101 011010 000100 000000 100000
011111 000000 000000 000000 011011 011100 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 011011 011100 000000 000000 000000 100000
010101 011001 000010 000000 011011 011100 000000 000001 000010 000000 000001 011001 011001 011001 011001 011001 011001 000010 000000 000001 000010 000000 011011 011100 000000 000001 011001 010110
010011 011010 000100 000000 000011 000100 000000 011011 011100 000000 000011 011010 011010 000110 000101 011010 011010 000100 000000 011011 011100 000000 000011 000100 000000 000011 011010 010100
011111 000000 000000 000000 000000 000000 000000 011011 011100 000000 000000 000000 000000 011011 011100 000000 000000 000000 000000 011011 011100 000000 000000 000000 000000 000000 000000 100000
011111 000000 000001 011001 011001 011001 011001 001000 000111 011001 011001 000010 000000 011011 011100 000000 000001 011001 011001 001000 000111 011001 011001 011001 011001 000010 000000 100000
011111 000000 000011 011010 011010 011010 011010 011010 011010 011010 011010 000100 000000 000011 000100 000000 000011 011010 011010 011010 011010 011010 011010 011010 011010 000100 000000 100000
011111 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 000000 100000 
001011 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 011110 001100
*/