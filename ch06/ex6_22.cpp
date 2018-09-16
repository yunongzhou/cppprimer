#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swapPoint(int *&, int *&);

int main(){
  int a = 1, b = 2;
  int *p1 = &a, *p2 = &b;
  cout << "p1 = " << p1 << ", p2 = " << p2 << endl;
  swapPoint(p1, p2);
  cout << "After swap,\n";
  cout << "p1 = " << p1 << ", p2 = " << p2 << endl;
  return 0;
} // main

void swapPoint(int *&x, int *&y){
  auto temp = x;
  x = y;
  y = temp;
}
// swapPoint
