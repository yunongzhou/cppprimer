#include<iostream>
#include<vector>
#include<list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main(){
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

  vector<int> intVec;
  for(int i = 0; i != 11; ++i) intVec.push_back(ia[i]);
  
  list<int> intLst(intVec.begin(), intVec.end());

  // remove even num
  for(auto iter = intVec.begin(); iter != intVec.end();){
    if((*iter) % 2 == 0) iter = intVec.erase(iter);
    else ++iter;
  }

  // remove odd num
  for(auto iter = intLst.begin(); iter != intLst.end();){
    if((*iter) % 2 != 0) iter = intLst.erase(iter);
    else ++iter;
  }

  for(auto i : intLst) cout << i << " ";
  cout << endl;

  for(auto i : intVec) cout << i << " ";
  cout << endl;

  return 0;
} // main
