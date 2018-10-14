#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::istringstream;

struct PersonInfo{
  string name;
  vector<string> phones;
};

int main(){
  string line, word;
  vector<PersonInfo> people;

  istringstream record(line);
  while(getline(cin, line)){
    PersonInfo info;
    record.clear();
    record.str(line);
    record >> info.name;
    while(record >> word)
      info.phones.push_back(word);
    people.push_back(info);
  }

  for(auto c : people){
    cout << c.name << " ";
    for(auto s : c.phones) cout << s << " ";
    cout << endl;
  }
  return 0;
} // main
