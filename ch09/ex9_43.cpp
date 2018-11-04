#include<iostream>
#include<string>

using std::string;
using std::distance;
using std::cout;
using std::endl;

void replaceStr(string &, const string &, const string &);

int main(){
  string str{"To drive straight thru is a foolish, tho courageous act."};
  replaceStr(str, "thru", "through");
  replaceStr(str, "tho", "though");
  
  cout << str << endl;

  return 0;
} // main

void replaceStr(string &s, const string &oldVal, const string &newVal){
  for(auto iter = s.begin(); distance(iter, s.end()) >= distance(
        oldVal.begin(), oldVal.end());){
    if(string{iter, iter+oldVal.size()} == oldVal){
      iter = s.erase(iter, iter+oldVal.size());
      iter = s.insert(iter, newVal.begin(), newVal.end());
      advance(iter, newVal.size());
    }
    else
      ++iter;
  }
} // replaceStr
