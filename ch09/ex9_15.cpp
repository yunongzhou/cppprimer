#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main(){
  vector<int> vec1 = {1, 2, 3};
  vector<int> vec2 = {1, 3, 2};

  if(vec1 == vec2) cout << "equal." << endl;
  else 
    cout << "unequal." << endl;
  return 0;
} // main
