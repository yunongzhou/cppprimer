#include<iostream>

using std::cin;
using std::cout;
using std::endl;

double Abs(double);

int main(){
  double num;
  cout << "### input a value:\n";
  cin >> num;
  cout << "The absolute value of " << num << 
  " is " << Abs(num) << endl;
  return 0;
} // main

double Abs(double a){
  if(a < 0) return(-a);
  else return a;
}
