#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  int ia[][4] = {
    {0,1,2,3},
    {4,5,6,7},
    {8,9,10,11}
  };

  // use range for
  for(auto &subArr : ia){
    for(auto num : subArr)
      cout << num << " ";
    cout << endl;
  }
  cout << endl;

  // use for loop subscript
  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 4; ++j){
      cout << ia[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // use for loop iterator
  for(auto row = ia; row != ia + 3; ++i){
    for(auto col = *row; col != *row+4; ++col){
      cout << *col << " ";
    }
    cout << endl;
  }
  return 0;
} // main
