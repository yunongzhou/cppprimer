#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
  string str;
  cout << "### Input a string...\n";
  cin >> str;
  for(auto &c : str){
    c = 'X';
  }
  cout << str << endl;
  return 0;
} // main
