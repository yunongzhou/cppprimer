#include<iostream>
#include "ex7_23.h"

using std::cin;

int main(){
  Screen myscreen;
  char ch = myscreen.get();
  ch = myscreen.get(0, 0);
  return 0;
} // main
