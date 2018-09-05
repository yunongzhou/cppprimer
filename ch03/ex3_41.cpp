#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main(){
  int arr[] = {1,2,3,4,5,6};
  vector<int> vec(begin(arr), end(arr));
  return 0;
} // main
