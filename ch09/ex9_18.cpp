#include<iostream>
#include<deque>
#include<string>

using std::deque;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
  string str;
  deque<string> strDeq;
  while(cin >> str){
    strDeq.push_back(str);
  }
  for(auto iter = strDeq.begin(); iter != strDeq.end(); ++iter)
    cout << *iter << endl;
  return 0;
} // main
