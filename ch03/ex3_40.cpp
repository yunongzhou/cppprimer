#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
  char ca1[] = "hello world";
  char ca2[] = "hello kitty";

  char largeStr[] = {};
  strcpy(largeStr, ca1);
  strcat(largeStr, " ");
  strcat(largeStr, ca2);

  char *cp = largeStr;
  while(*cp){
    cout << *cp;
    ++cp;
  }
  cout << endl;
  return 0;
} // main
