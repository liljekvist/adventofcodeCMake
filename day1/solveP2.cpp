#include <iostream>
using std::cout;
using std::stoi;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

#include <vector>
using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> values;
    string line;
    ifstream myfile ("../../../../day1/input.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
          values.push_back(stoi(line));
        }

        myfile.close();
    }
    else cout << "Unable to open file"; 

    int incCounter = 0;
    int currNumber;
    int lastNumber = -1;
    int currRatio = 0;
    for(int i = 0; i < (values.size() - 2); i++){
        currNumber = values[i] + values[i + 1] + values[i + 2];
        if(lastNumber != -1){
            currRatio = currNumber - lastNumber;
            if(currRatio > 0) incCounter++;
        }
        lastNumber = currNumber;
    }
    cout << incCounter;
    return 0;
}
