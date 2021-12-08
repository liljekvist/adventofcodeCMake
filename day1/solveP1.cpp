#include <iostream>
using std::cout;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

int main(int argc, char const *argv[])
{
    string line;
    ifstream myfile ("input.txt");
    if (myfile.is_open())
    {
        int incCounter = 0;
        int currInt;
        int lastInt = -1;
        int currRatio;
        while ( getline (myfile,line) )
        {
          currInt = std::stoi(line);
          if(lastInt != -1) {
              
              currRatio = currInt - lastInt ;

              if(currRatio > 0){
                  incCounter++;
              }
          }

        lastInt = currInt; 
        }

        myfile.close();
    }
    else cout << "Unable to open file"; 
    return 0;
}
