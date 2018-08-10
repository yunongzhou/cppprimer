#include<iostream>

int main(){
  std::cout << "Enter two integers:";
  int a, b, left, right;
  std::cin >> a >> b;
  left = a < b ? a : b;
  right = a > b ? a : b;
  for(int i = left; left <= right; std::cout << left++ << "\n");
  return 0;
} // main
