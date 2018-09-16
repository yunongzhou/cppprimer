#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using iter = vector<int>::iterator;

void print(iter, iter);

int main(){
  int num;
  vector<int> vec;
  cout << "### input the elements for vector:\n";
  while(cin >> num) vec.push_back(num);

  print(vec.begin(), vec.end());

  return 0;
} // main

void print(iter beg, iter end){
  if(beg != end){
    cout << *beg << " ";
    print(std::next(beg), end);
  }
} // print
