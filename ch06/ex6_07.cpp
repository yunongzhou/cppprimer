#include<iostream>

using std::cout;
using std::endl;

int func();

int main(){
  for(int i = 0; i < 10; ++i) cout << func() << endl;
  return 0;
} // main

int func(){
  static int num = 0;
  num+=1;
  return num;
} // func
