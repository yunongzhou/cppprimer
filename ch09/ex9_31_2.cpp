#include<forward_list>
#include<iostream>

using std::forward_list;
using std::cout;
using std::endl;

int main(){
  forward_list<int> intFlst = {0,1,2,3,4,5,6,7,8,9};
  auto iter = intFlst.begin();
  auto prev = intFlst.before_begin();
  while(iter != intFlst.end()){
    if(*iter % 2){
      iter = intFlst.insert_after(prev, *iter);
      advance(iter, 2);
      advance(prev, 2);
    }
    else iter = intFlst.erase_after(prev);
  }
  
  for(auto i : intFlst) cout << i << " ";
  cout << endl;

  return 0;
} // main
