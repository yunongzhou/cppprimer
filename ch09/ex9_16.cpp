#include<iostream>
#include<vector>
#include<list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main(){
  vector<int> vec1 = {1, 2, 3};
  list<int> lst = {1, 2, 3};

  vector<int> vec2(lst.begin(), lst.end());

  if(vec1 == vec2) cout << "equal" << endl;
  else cout << "unequal" << endl;

  return 0;
} // main
