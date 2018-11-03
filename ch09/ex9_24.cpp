#include<vector>
#include<iostream>

using std::vector;
using std::cout;
using std::endl;

int main(){
  vector<int> testVec;
  
  cout << "Using at: " << testVec.at(0) << endl;
  cout << "Using subscript operator: " << testVec[0] << endl;
  cout << "Using front: " << testVec.front() << endl;
  cout << "Using begin: " << *testVec.begin() << endl;

  return 0;
} // main
