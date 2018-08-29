#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string str;
  cout << "### Input a string...\n";
  cin >> str;
  decltype(str.size()) lenStr = 0;
  while(lenStr < str.size()){
    str[lenStr++] = 'X';
  }
  cout << str << endl;
  return 0;
} // main
