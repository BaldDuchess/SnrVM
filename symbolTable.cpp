
// reading a text file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
  string line;
  ifstream fileIn ("asmfile.txt");
  if (fileIn.is_open())
  {
    while ( getline (fileIn,line) )
    {
      cout << line << '\n';
    }
    fileIn.close();
  }

  else cout << "Unable to open file"; 

  ofstream fileOut ("newFile1.txt");
  if (fileOut.is_open())
  {
    fileOut << "symbol  add r1  r2\n";
    fileOut << "jmp symbol\n";
    fileOut.close();
  }
  else cout << "Unable to open file";

  return 0;
}