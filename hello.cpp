#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  // The differences between \n and endl:
  //  (1) \n may be platform dependent, endl respect differences
  //  (2) endl flushes the buffer
  
  cout << "Hello, World!\n";
  cout << "Hello, World!" << endl;

  ofstream outf("file.txt");

  outf << "Hello File" << flush;

  string x;
  cout << "We are before closing the file; press return to continue";
  getline(cin,x);

  outf.close();
  cout << "After closing the file; press return to continue";
  getline(cin,x);

  return 0;  
}
