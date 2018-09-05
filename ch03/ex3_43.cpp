#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  int ia[3][4] = {
    {0,1,2,3},
    {4,5,6,7},
    {8,9,10,11}
  };

  // use range for
  for(int (&subArr)[4] : ia){
    for(int num : subArr)
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
  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 4; ++j){
      cout << *(*(ia+i) + j) << " ";
    }
    cout << endl;
  }
  return 0;
} // main
