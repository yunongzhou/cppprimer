#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main(){
  vector<char> chVec = {'H', 'e', 'l', 'l', 'o'};

  string str(chVec.begin(), chVec.end());

  cout << str << endl;

  return 0;
} // main
