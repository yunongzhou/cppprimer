#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(double &);

int main(){
  double a;
  cout << "### input a:\n";
  cin >> a;
  cout << "a = " << a << "\n";
  reset(a);
  cout << "After reset, a = " << a << endl;

  return 0;
} // main

void reset(double &num){
  num = 0;
}
