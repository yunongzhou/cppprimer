#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::string;

istream &func(istream &is){
  string str;
  while(is >> str)
    cout << str << endl;
  is.clear();
  return is;
}

int main(){
  istream& is = func(cin);
  cout << is.rdstate() << endl;
  return 0;
} // main
