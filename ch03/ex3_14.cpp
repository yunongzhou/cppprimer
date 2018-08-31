#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  vector<int> vec;
  int iVec;
  while(cin >> iVec){
    vec.push_back(iVec);
  }
  return 0;
} // main
