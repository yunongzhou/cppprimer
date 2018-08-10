#include<iostream>

int main(){
  std::cout << "Enter two integers:";
  int a, b, left, right;
  std::cin >> a >> b;
  left = a < b ? a : b;
  right = a > b ? a : b;
  while( left <= right){
    std::cout << (left++) << " ";
  }
  return 0;
} // main
