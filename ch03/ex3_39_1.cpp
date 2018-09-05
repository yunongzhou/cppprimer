#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string str1, str2;
  cout << "### Input two strings:\n";
  cin >> str1 >> str2;

  if(str1 < str2) cout << "str1 < str2" << endl;
  else if(str1 > str2) cout << "str1 > str2" << endl;
  else cout << "str1 == str2" << endl;
  return 0;
} // main
