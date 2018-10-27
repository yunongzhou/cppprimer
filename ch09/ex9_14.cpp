#include<iostream>
#include<vector>
#include<string>
#include<list>

using std::list;
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
  list<const char *> cLst{"hello", "world"};

  vector<string> sVec; 

  sVec.assign(cLst.cbegin(), cLst.cend());
  
  for(auto i : sVec) cout << i << " ";
  cout << endl;

  return 0;
} // main
