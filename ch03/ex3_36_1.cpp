#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
  constexpr int arrSize = 10;
  int arr1[arrSize] = {}, arr2[arrSize] = {};
  int num, i = 0, j = 0;
  cout << "### input 10 elements for array1:\n";
  while(i < arrSize){
    cin >> num;
    arr1[i++] = num;
  }
  cout << "### input 10 elements for array2:\n";
  while(j < arrSize){
    cin >> num;
    arr2[j++] = num;
  }

  for(size_t i = 0; i < arrSize; ++i){
    if(arr1[i] != arr2[i]){
      cout << "### This two arrays are not equal.\n";
      exit(0);
    }
    else continue;
  }
  cout << "### This two arrays are equal.\n";
  return 0;
} //main
