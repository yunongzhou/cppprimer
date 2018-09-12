#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string str1, str2;

  do{
    cout << "### input two strings:\n";
    cin >> str1 >> str2;
    cout << (str1 < str2 ? str1 : str2) << " less than the other." << endl;
  }
  while(cin);

  return 0;
} // main
