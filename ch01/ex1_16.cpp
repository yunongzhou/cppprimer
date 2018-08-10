#include<iostream>

int main(){
  int n;
  int sum = 0;
  for(sum = 0; std::cin >> n; sum += n);
  std::cout << sum << std::endl;
  return 0;
} // main
