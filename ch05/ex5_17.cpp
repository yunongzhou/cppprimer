#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  vector<int> ivec1, ivec2;
  
  ivec1 = {0, 1, 1};
  ivec2 = {0, 1, 1, 2, 3, 5};

  for(int i = 0; i != ivec1.size(); ++i){
    if(ivec1[i] == ivec2[i]) continue;
    else{
      cout << "ivec1 is not prefix of ivec2.\n";
      exit(0);
    }
  }
  cout << "ivec1 is prefix of ivec2.\n";
  cout << endl;
  return 0;
} // main
