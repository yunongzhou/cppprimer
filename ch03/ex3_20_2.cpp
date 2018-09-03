#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  int iVal = 0;
  vector<int> iVec;
  
  while(cin >> iVal){
    iVec.push_back(iVal);
  }

  for(decltype(iVec.size()) i = 0; i != iVec.size()/2; ++i){
    int sum = iVec[i] + iVec[iVec.size() - i - 1];
    cout << sum << " ";
  }
  cout << endl;
  return 0;
} // main
