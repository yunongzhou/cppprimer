#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
  string str = "\0";
  vector<string> sVec;
  while(cin >> str){
    sVec.push_back(str);
  }
  return 0;
} // main
