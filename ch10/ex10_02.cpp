// Copyright[2018](Y. Zhou)

#include<iostream>
#include<algorithm>
#include<list>
#include<string>

using std::list;
using std::string;
using std::cout;
using std::endl;

int main() {
  list<string> str_lst = {"a", "b", "c", "aa", "he", "a", "a"};

  int cnt = count(str_lst.begin(), str_lst.end(), "a");

  cout << cnt << endl;

  return 0;
}  // main
