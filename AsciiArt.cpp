#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{

    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;

    string asciiArrayIn[H];
    string asciiArrayOut[H];
    string alphaStringHigh = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string alphaStringLow = {"abcdefghijklmnopqrstuvwxyz"};

    size_t findHigh, findLow;

    getline(cin, T);
    for (int i = 0; i < H; ++i) {
        string ROW;
        getline(cin, ROW);
        asciiArrayIn[i] = ROW;
    }

    for (size_t i = 0; i < T.size(); ++i)
    {
        findHigh = alphaStringHigh.find(T[i]);
        findLow = alphaStringLow.find(T[i]);
        if (findHigh != string::npos)
        {
            for (size_t n = 0; n < H; ++n)
            {
                asciiArrayOut[n].append(asciiArrayIn[n], findHigh*L, L);
            }
        }
        else if(findLow != string::npos)
        {
            for (size_t n = 0; n < H; ++n)
            {
                asciiArrayOut[n].append(asciiArrayIn[n], findLow*L, L);
            }
        }
        else 
        {
            for (size_t n = 0; n < H; ++n)
            {
                asciiArrayOut[n].append(asciiArrayIn[n], L*26, L);
            }
        }
        findHigh = 0;
        findLow = 0;
    }
    
    

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    for (size_t i; i < H; ++i)
    {
        cout << asciiArrayOut[i] << endl;
    }

    //cout << "answer" << endl;
}