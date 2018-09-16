#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int largeNum(const int, const int* const);

int main(){
  int a = 0, b = 0;
  int *p = nullptr;
  cout << "### input two integer:\n";
  cin >> a >> b;
  p = &b;
  
  cout << "The larger number is " << largeNum(a, p) << endl;
  return 0;
} // main

int largeNum(const int x, const int* const py){
  return((x > *py) ? x : *py);
} // largeNum
