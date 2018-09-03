#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(){
  int iVal = 0;
  vector<int> iVec;

  while(cin >> iVal){
    iVec.push_back(iVal);
  }

  for(decltype(iVec.size()) i = 0; i != iVec.size() - 1; ++i){
    int sum = iVec[i] + iVec[i+1];
    cout << sum << " ";
  }
  cout << endl;
  return 0;
} // main
