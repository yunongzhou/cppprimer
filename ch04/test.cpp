#include<iostream>

int main(){
  int x = 1, y = 1, a = 0, b = 0;
  std::cout << "Input two integers\n";
  std::cin >> a >> b;
  (a > b) ? ++x, ++y : --x, --y;
  std::cout << x << "\t" << y << std::endl;
  return 0;
}
