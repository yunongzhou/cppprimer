#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  int num = 0;
  vector<int> vec;
  cout << "###Input elements for vector:\n";
  while(cin >> num){
    vec.push_back(num);
  }
  for(auto &i : vec){
    i *= ((i % 2 != 0) ? 2 : 1);
  }

  for(auto i : vec){
    cout << i << " ";
  }
  cout << endl;
  return 0;
} // main
