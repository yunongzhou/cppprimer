#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string str, sumStr;
  while(cin >> str){
    sumStr += str;
  }
  cout << sumStr << endl;
  return 0;
} // main
