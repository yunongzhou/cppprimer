#include<iostream>
#include<iterator>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(){
  int arr[] = {1,2,3,4,5,6,7};

  int *pbeg = begin(arr), *pend = end(arr);
  
  while(pbeg != pend) *(pbeg++) = 0;

  for(auto it = begin(arr); it != end(arr); ++it) cout << *it << " ";

  return 0;
} // main
