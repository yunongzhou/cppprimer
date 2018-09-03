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
  while(cin >> num){
    iVec.push_back(num);
  }

  for(auto it = iVec.begin(); it != iVec.end()-1; ++it){
    int sum = *it + *(it+1);
    cout << sum << endl;
  }
  return 0;
} // main
