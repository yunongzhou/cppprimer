#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

using Vector = vector<int>;

int main(){
  int num;
  Vector iVec;
  while(cin >> num) iVec.push_back(num);

  for(auto beg = iVec.begin(), end = iVec.end() - 1; beg <= end;  ++beg, --end){
    cout << *beg + *end << " ";
  }
  cout << endl;
  return 0;
} // main
