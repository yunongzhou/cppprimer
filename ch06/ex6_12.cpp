#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int&, int&);

int main(){
  int a, b;
  cout << "### input a:\n";
  cin >> a;
  cout << "### input b:\n";
  cin >> b;
  cout << "a = " << a << ", b = " << b << endl;

  int &r1 = a, &r2 = b;
  swap(r1, r2);

  cout << "After swap, a = " << a << ", b = " << b << endl;

  return 0;
} // main

void swap(int &x, int &y){
  int temp = 0;
  temp = x;
  x = y;
  y = temp;
}
