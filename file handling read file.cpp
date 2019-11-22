#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string data;
  ifstream myfile ("sample.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,data) )
    {
      cout << data << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
