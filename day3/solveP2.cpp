#include <iostream>
using std::cout;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

#include <array>
using std::array;

#include <bitset> 
using std::bitset;

#include <vector> 
using std::vector;

int main()
{
    array<std::pair<int, int>, 12> numbers0;
    array<std::pair<int, int>, 12> numbers1;
    string* stringArray = new string[1000]; // xd heap time pooooog
    vector<string> possibleResultsOxygen;
    vector<string> possibleResultsCO2;
    string line;
    string tmp;
    string gammaStr;
    string gammaStrFlipped;
    ifstream myfile("../../../../day3/input.txt");
    int lineCount = 0;

    if (myfile.is_open())
    {
        while (getline(myfile, line, '\n'))
        {
            stringArray[lineCount] = line;
            lineCount++;
        }
        myfile.close();

        for (int i = 0; i < 12; i++) {
            for (int x = 0; x < 1000; x++) {
                tmp = stringArray[x];
                if (tmp[i] == '1') {
                    numbers0[i].first += 1;
                }
                else {
                    numbers0[i].second += 1;
                }
            }

            if (numbers0[i].first > numbers0[i].second) {
                //is a one
                gammaStr += '1';
            }
            else if (numbers0[i].first == numbers0[i].second) {
                //is a one
                gammaStr += '1';
            }
            else {
                //is a zero
                gammaStr += '0';
            }
        }

        for (int i = 0; i < 12; i++) {
            for (int x = 0; x < 1000; x++) {
                tmp = stringArray[x];
                if (tmp[i] == '1') {
                    numbers1[i].first += 1;
                }
                else {
                    numbers1[i].second += 1;
                }
            }

            if (numbers1[i].first > numbers1[i].second) {
                //is a one
                gammaStrFlipped += '0';
            }
            else if (numbers1[i].first == numbers1[i].second) {
                //is a one
                gammaStrFlipped += '0';
            }
            else {
                //is a zero
                gammaStrFlipped += '1';
            }
        }
    }
    else cout << "Unable to open file";
    // Set up validResults Vec
    for (int i = 0; i < 1000; i++) {
        if (stringArray[i].compare(0, 1, gammaStr, 0 , 1) == 0) {
            possibleResultsOxygen.push_back(stringArray[i]);
        }
    }

    for (size_t x = 1; x < gammaStr.size(); x++) {
        if (possibleResultsOxygen.size() == 1) break;
        for (int i = 0; i < possibleResultsOxygen.size(); i++) {
            if (possibleResultsOxygen[i].compare(0, x, gammaStr, 0 , x) != 0) {
                possibleResultsOxygen.erase(possibleResultsOxygen.begin() + i);
            }
        }
    }

    //Flip gamma

    for (int i = 0; i < 1000; i++) {
        if (stringArray[i].compare(0, 1, gammaStrFlipped, 0, 1) == 0) {
            possibleResultsCO2.push_back(stringArray[i]);
        }
    }

    for (size_t x = 1; x < gammaStrFlipped.size(); x++) {
        if (possibleResultsCO2.size() == 1) break;
        for (int i = 0; i < possibleResultsCO2.size(); i++) {
            if (possibleResultsCO2[i].compare(0, x, gammaStrFlipped, 0, x) != 0) {
                possibleResultsCO2.erase(possibleResultsCO2.begin() + i);
            }
        }
    }


    bitset<12> oxygen(possibleResultsOxygen[0]);
    bitset<12> co2(possibleResultsCO2[0]);
    int res = (oxygen.to_ulong() * co2.to_ulong());
    cout << oxygen.to_string() << "\n";
    cout << res << "\n";

    return 0;
}
