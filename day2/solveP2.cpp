#include <iostream>
using std::cout;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

int main()
{
    string line;
    ifstream myfile ("../../../../day2/input.txt");
    enum class Directions {forward, down, up};
    int depth = 0;
    int horizontalPos = 0;
    int aim = 0;
    Directions nextDir{};
    if (myfile.is_open())
    {
        while ( getline (myfile,line, '\n') )
        {
            size_t pos = line.rfind(' ');
            string new_str = line.substr(0, pos);
            line = line.substr((pos + 1), -1);

            if (new_str == "forward"){ nextDir = Directions::forward; }
            if (new_str == "down") { nextDir = Directions::down; }
            if (new_str == "up") { nextDir = Directions::up; }
            if (nextDir == Directions::forward) { horizontalPos += stoi(line); depth += (stoi(line) * aim); }
            if (nextDir == Directions::down) { aim += stoi(line); }
            if (nextDir == Directions::up) { aim -= stoi(line); }
            cout << "Depth: " << depth << "            Hori:" << horizontalPos << "\n\n\n";
        }
        myfile.close();
    }
    else cout << "Unable to open file"; 

    cout << (horizontalPos * depth);
    return 0;
}
