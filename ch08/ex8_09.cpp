#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using std::istream;
using std::string;
using std::cout;
using std::endl;

istream& func(istream &is){
  string str;
  while(is >> str)
    cout << str << endl;
  is.clear();
  return is;
}

int main(){
  std::istringstream strOut("hello world");
  func(strOut);
  return 0;
} // main
