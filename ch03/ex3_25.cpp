#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

using Vector = vector<unsigned>;

int main(){
  Vector score(11,0);
  unsigned grade;

  while(cin >> grade){
    ++(*(score.begin() + grade/10));
  }

  for(auto i:score) cout << i << endl;

  return 0;
} // main
