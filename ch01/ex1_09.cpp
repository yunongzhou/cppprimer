#include<iostream>

int main(){
  int n = 50, sum = 0;
  while(n <= 100){
    sum += n;
    ++n;
  }
  std::cout << sum << std::endl;
} // main
