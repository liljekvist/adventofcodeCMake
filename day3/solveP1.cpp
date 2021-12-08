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

int main()
{
    array<std::pair<int, int>, 12> numbers;
    string* stringArray = new string[1000]; // xd heap time pooooog
    string line;
    string tmp;
    string gammaStr;
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
                    numbers[i].first += 1;
                }
                else {
                    numbers[i].second += 1;
                }
            }

            if (numbers[i].first > numbers[i].second) {
                //is a one
                gammaStr += '1';
            }
            else {
                //is a zero
                gammaStr += '0';
            }
        }
    }
    else cout << "Unable to open file";

    bitset<12> gamma (gammaStr);
    int res = (gamma.to_ulong() * gamma.flip().to_ulong());
    cout << res << "\n";

    return 0;
}
