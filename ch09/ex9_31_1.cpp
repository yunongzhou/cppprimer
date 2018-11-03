#include<list>
#include<iostream>

using std::list;
using std::cout;
using std::endl;

int main(){
  list<int> intLst = {0, 1, 2, 3, 4, 5,6,7,8, 9};
  auto iter = intLst.begin();
  while(iter != intLst.end()){
    if(*iter % 2){
      iter = intLst.insert(iter, *iter);
      advance(iter, 2);
    }
    else{
      iter = intLst.erase(iter);
    }
  }

  for(auto i : intLst) cout << i << " ";
  cout << endl;

  return 0;
} // main
