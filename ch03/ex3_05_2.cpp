#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main(){
  string line, sumStr;
  while(getline(cin, line)){
    sumStr += line + ' ';
  }
  cout << sumStr << endl;
  return 0;
} // main
