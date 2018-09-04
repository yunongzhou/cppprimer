#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

using Vector = vector<int>;
constexpr int vecSize = 10;

int main(){
  Vector vec1, vec2;
  int i = 0, j = 0, num;
  while(cin >> num && (i++) != vecSize - 1) vec1.push_back(num);
  while(cin >> num && (j++) != vecSize - 1) vec2.push_back(num);

  if(vec1 == vec2) cout << "The two vectors are equal.\n";
  else cout << "The two vectors are not equal.\n";

  return 0;
} // main
