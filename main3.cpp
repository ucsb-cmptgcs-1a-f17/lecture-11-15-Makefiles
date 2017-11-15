#include <iostream>

using namespace std;
#include "greetLib.h"

int main(int argc, char *argv[]) {
  italian(); cout << argv[1] << endl;
  farsi(); cout << argv[1] << endl;
  russian(); cout << argv[1] << endl;
  return 0;  
}
