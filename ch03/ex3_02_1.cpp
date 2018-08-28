#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
  string str;
  while(getline(cin, str)){
    std::cout << str << std::endl;
  }
  return 0;
} // main
