#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;

int main(){
  vector<string> text;
  string word;
  while(getline(cin, word)){
    text.push_back(word);
  }

  for(auto it = text.begin(); it != text.end() && !it->empty(); ++it){
    for(auto& ch : *it) ch = toupper(ch);
    cout << *it << " ";
  }
  cout << endl;
  return 0;
} // main
