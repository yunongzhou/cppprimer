#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
  string str;
  cout << "### Input a string...\n";
  cin >> str;
  decltype(str.size()) lenStr = str.size();
  for(decltype(str.size()) i = 0; i < lenStr; ++i){
    str[i] = 'X';
  }
  cout << str << endl;
  return 0;
} // main
