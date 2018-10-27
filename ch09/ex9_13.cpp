#include<iostream>
#include<vector>
#include<list>

using std::vector;
using std::list;
using std::endl;
using std::cout;

int main(){
  list<int> lst = {1, 2, 3, 4};
  vector<int> iVec = {5, 6, 7, 8};
  
  vector<double> dVec1(lst.begin(), lst.end());
  for(auto i : dVec1) cout << i << " ";
  cout << endl;

  vector<double> dVec2(iVec.begin(), iVec.end());
  for(auto i : dVec2) cout << i << " ";
  cout << endl;
  return 0;
} // main
