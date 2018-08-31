#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  cout << "size of v1: " << v1.size() << endl;
  for(decltype(v1.size()) i = 0; i < v1.size(); ++i){
    cout << v1[i] << " ";
  }
  cout << endl;

  cout << "size of v2: " << v2.size() << endl;
  for(decltype(v2.size()) i = 0; i < v2.size(); ++i){
    cout << v2[i] << " ";
  }
  cout << endl;

  cout << "size of v3: " << v3.size() << endl;
  for(decltype(v3.size()) i = 0; i < v3.size(); ++i){
    cout << v3[i] << " ";
  }
  cout << endl;

  cout << "size of v4: " << v4.size() << endl;
  for(decltype(v4.size()) i = 0; i < v4.size(); ++i){
    cout << v4[i] << " ";
  }
  cout << endl;

  cout << "size of v5: " << v5.size() << endl;
  for(decltype(v5.size()) i = 0; i < v5.size(); ++i){
    cout << v5[i] << " ";
  }
  cout << endl;

  cout << "size of v6: " << v6.size() << endl;
  for(decltype(v6.size()) i = 0; i < v6.size(); ++i){
    cout << v6[i] << " ";
  }
  cout << endl;

  cout << "size of v7: " << v7.size() << endl;
  for(decltype(v7.size()) i = 0; i < v7.size(); ++i){
    cout << v7[i] << " ";
  }
  cout << endl;

  return 0;
} // main
