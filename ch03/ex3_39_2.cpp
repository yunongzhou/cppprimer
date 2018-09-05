#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
  char ca1[] = "hello world";
  char ca2[] = "hello kitty";

  if(strcmp(ca1, ca2) < 0) cout << "ca1 < ca2" << endl;
  else if(strcmp(ca1, ca2) > 0) cout << "ca1 > ca2" << endl;
  else cout << "ca1 == ca2" << endl;
  return 0;
} // main
