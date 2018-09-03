#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
  vector<int> iVec;
  int iVal;
  cout << "### Input ten integers:\n";
  for(int i = 0; i != 10; ++i){
    cin >> iVal;
    iVec.push_back(iVal);
  }

  for(auto it = iVec.begin(); it != iVec.end(); ++it){
    *it *= 2;
  }

  for(auto i : iVec) cout << i << endl;
  return 0;
} // main
