#include<list>
#include<deque>
#include<iostream>

using std::list;
using std::deque;
using std::cout;
using std::endl;

int main(){
  list<int> intLst;
  deque<int> deqIntOdd, deqIntEven;
  for(int i = 0; i != 9; ++i) intLst.push_back(i+1);

  auto iter = intLst.begin();

  for(auto i : intLst){
    if( i % 2 == 0) deqIntEven.push_back(i);
    else deqIntOdd.push_back(i);
  }

  for(auto i : deqIntOdd) cout << i << " ";
  cout << endl;
  for(auto i : deqIntEven) cout << i << " ";
  cout << endl;

  return 0;
} // main
