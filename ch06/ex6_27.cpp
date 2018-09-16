#include<iostream>
#include<initializer_list>

using std::cin;
using std::cout;
using std::endl;

int sumList(const std::initializer_list<int>& n){
  int sum = 0;
  for(auto i : n) sum += i;
  return sum;
} // sumList

int main(){
  cout << sumList({2, 4, 6, 8, 10}) << endl;
  return 0;
} // main
