#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
  string s = "word";
  string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
  cout << p1 << endl;
  return 0;
} // main
