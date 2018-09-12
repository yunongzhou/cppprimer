#include<string>
#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string str, preStr;
  while(cin >> str){
    if(str == preStr){
      break;
    }
    else
      preStr = str;
  }
  if(cin.eof())
    cout << "No word was repeated.\n";
  else
    cout << "The same word occurs twice in succession.\n";
  return 0;
} // main
