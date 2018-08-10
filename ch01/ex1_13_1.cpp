#include<iostream>

int main(){
  int sum = 0;
  for(int i = 50; i <= 100; sum+=(i++));
  std::cout << sum << std::endl;
} // main
