#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

using Vector = vector<int>;

int main(){
  Vector vec1, vec2;
  for(int i = 0; i < 10; ++i){
    vec1.push_back(i);
  }

  vec2 = vec1;

  return 0;
} // main
