#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int*, int*);

int main(){
  int a, b;
  cout << "### input a:\n";
  cin >> a;
  cout << "### input b:\n";
  cin >> b;
  cout << "a = " << a << "\n";
  cout << "b = " << b << "\n";

  int *p1 = &a, *p2 = &b;
  swap(p1, p2);
  cout << "After swap,\n";
  cout << "a = " << a << "\n";
  cout << "b = " << b << "\n";

  return 0;
} // main

void swap(int *x, int *y){
  int temp = 0;
  temp = *x;
  *x = *y;
  *y = temp;
} // swap
