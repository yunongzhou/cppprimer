#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv){
  string str;
  for(int i = 0; i != argc; ++i){
    str += argv[i];
    str += " ";
  }

  cout << str << endl;
  return 0;
} // main
