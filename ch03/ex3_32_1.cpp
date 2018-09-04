#include<iostream>

using std::cout;
using std::endl;

int main(){
  int arr[10] = {};
  int arrCopy[10] = {};

  for(size_t i = 0; i < 10; ++i){
    arr[i] = i;
  }

  for(size_t i = 0; i < 10; ++i){
    arrCopy[i] = arr[i];
  }
  return 0;
} // main
