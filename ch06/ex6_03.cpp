#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int);

int main(){
  int num;
  
  cout << "### input a integer:\n";

  cin >> num;

  cout << "The factorial of " << num << " is " << 
  fact(num) << endl;

  return 0;
} // main

int fact(int a){
  int out = 1;
  while(a != 0){
    out *= a;
    a--;
  }
  return out;
} // fact
