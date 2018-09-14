#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool containCapital(const string&);
void toLowerCase(string &);

int main(){
  string str;
  cout << "### input a string:\n";
  cin >> str;
  (containCapital(str) == true)?
  (cout << "This string contains capital letters."):
  (cout << "This string doesn't contain capital letters.\n");

  if(containCapital(str)) toLowerCase(str);
  cout << str << endl;

  return 0;
} // main

bool containCapital(const string &localStr){
  for(auto c : localStr){
    if(islower(c)) continue;
    else return true;
  }
  return false;
} // containCapital

void toLowerCase(string &localStr){
  for(auto &c : localStr){
    if(isupper(c)) c = tolower(c);
  }
} // toLowerCase
