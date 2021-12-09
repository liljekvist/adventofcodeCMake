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

#include <math.h> 

bitset<12> solve(char highOrLow, vector<string> stringArray){
    std::cerr << stringArray.size() << "\n";
    for(int i = 0; i < 12; i++){ // Längd på en bin är alltid 12
    size_t count = 0;
        for(auto num : stringArray){
            if(num[i] == highOrLow){
                count++;
            }
        }

        if(highOrLow == '1'){
            if(count >= ceil(stringArray.size()/2)){
                vector<string> tmp;
                for(auto num : stringArray){
                    if (num[i] == 1)
                    {
                        tmp.push_back(num);
                    }
                }
                stringArray = tmp;
            }
            else{
                vector<string> tmp;
                for(auto num : stringArray){
                    if (num[i] == 0)
                    {
                        tmp.push_back(num);
                    }
                }
                stringArray = tmp;
            }
        }
        else {
            if(count > floor(stringArray.size()/2)){
                vector<string> tmp;
                for(auto num : stringArray){
                    if (num[i] == 1)
                    {
                        tmp.push_back(num);
                    }
                }
                stringArray = tmp;
            }
            else{
                vector<string> tmp;
                for(auto num : stringArray){
                    if (num[i] == 0)
                    {
                        tmp.push_back(num);
                    }
                }
                stringArray = tmp;
            }
        }

        if(stringArray.size() == 1){
            bitset<12> result(stringArray[0]);
            return result;
        }
        std::cerr << stringArray.size() << "\n";
    }

    std::cerr << stringArray.size() << "\n";
}


int main()
{
    vector<string> stringArray; // 
    ifstream myfile("../day3/input.txt");
    string line;

    if (myfile.is_open())
    {
        while (getline(myfile, line, '\n'))
        {
            stringArray.push_back(line);
        }
        myfile.close();
    }
    else cout << "Unable to open file";
   
    auto oxygen = solve('1', stringArray);
    auto CO2 = solve('0', stringArray);
    cout << CO2.to_string() << "\n";

    return 0;
}
