// Copyright[2018](Y. Zhou)
#include<iostream>
#include<algorithm>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
  vector<int> vec_test = {0, 1, 2, 3, 4, 5, 5, 7, 10};

  int cnt = count(vec_test.begin(), vec_test.end(), 5);

  cout << cnt << endl;

  return 0;
}  // main
