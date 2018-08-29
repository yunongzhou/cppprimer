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
  for(auto &c : str){
    if(!ispunct(c))
      cout << c;
    else continue;
  }
  cout << endl;
  return 0;
} // main
