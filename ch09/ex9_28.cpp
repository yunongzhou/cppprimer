#include<forward_list>
#include<string>
#include<iostream>

using std::string;
using std::forward_list;
using std::cout;
using std::endl;

void findInsrt(forward_list<string> &, const string &, const string &);

int main(){
  forward_list<string> strLst = {"hello", "world", "yunong", "zhou"};
  string str1 = "hello", str2 = "kitty";
  findInsrt(strLst, str1, str2);

  for(auto i : strLst) cout << i << " ";
  cout << endl;

  return 0;
} // main

void findInsrt(forward_list<string> &strLst, const string &str1, 
    const string &str2){
  auto prev = strLst.before_begin();

  for(auto iter = strLst.begin(); iter != strLst.end(); prev = iter++){
    if(*iter == str1){
      iter = strLst.insert_after(iter, str2);
      return;
    }
    else continue;
  }
  strLst.insert_after(prev, str2);
} // findInsrt
