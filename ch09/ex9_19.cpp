#include<iostream>
#include<string>
#include<list>

using std::list;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
  string str;
  list<string> strLst;
  while(cin >> str) strLst.push_back(str);

  for(auto iter = strLst.cbegin(); iter != strLst.cend(); ++iter)
    cout << *iter << " ";
  cout << endl;

  return 0;
} // main
