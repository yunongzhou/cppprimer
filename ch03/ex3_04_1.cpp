#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string str1, str2;
  cout << "### Input 2 strings:" << endl;
  cin >> str1 >> str2;
  if(str1 == str2){
    cout << "These two strings are equal." << endl;
  }
  else{
    cout << ((str1 > str2)? str1 : str2) << endl;
  }
  return 0;
} // main
