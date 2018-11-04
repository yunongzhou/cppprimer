#include<vector>
#include<iostream>

using std::vector;
using std::cout;
using std::endl;

int main(){
  vector<int> vec;
  for(int i = 0; i != 10; ++i){
    cout << "size is: " << vec.size() << ", capacity is: " << 
    vec.capacity() << endl;
    vec.push_back(i);
  }
  return 0;
} // main
