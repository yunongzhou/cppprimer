#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
  int arr[6] = {}, num, i = 0;
  vector<int> vec;
  cout << "### Input 6 integers for vector...\n";
  while((i++) < 6){
    cin >> num;
    vec.push_back(num);
  }

  for(int i = 0; i < 6; ++i){
    *(arr+i) = vec[i];
  }

  for(auto i : arr) cout << i << " ";
  cout << endl;

  return 0;
} // main
