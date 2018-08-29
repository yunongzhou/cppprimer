#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string str1, str2;
  cout << "### Input two strings...\n";
  cin >> str1 >> str2;
  int lenStr1 = str1.size(), lenStr2 = str2.size();
  if(lenStr1 != lenStr2)
    cout << ((lenStr1 > lenStr2) ? str1 : str2) << " is longer." << endl;
  else
    cout << "### these two strings have the same length." << endl;
  return 0;
} // main
