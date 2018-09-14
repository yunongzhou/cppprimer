#include "ex6_08.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
  int a = 0;
  cout << "### input an integer:\n";
  cin >> a;
  cout << " factorial of " << a << " is:" << Fact(a) << endl;
  return 0;
} // main
