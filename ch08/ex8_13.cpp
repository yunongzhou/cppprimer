#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>

using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;
using std::ostringstream;
using std::cerr;
using std::cout;
using std::endl;

struct PersonInfo{
  string name;
  vector<string> phones;
};

// functions
bool valid(const string &);
string format(const string &);

int main(){
  ifstream readStr("phoneNum.dat");
  if(!readStr.is_open()){
    cerr << "###Error: phoneNum.dat is not exist.\n\n";
    return -1;
  }
  
  string line, word;
  vector<PersonInfo> people;
  istringstream record;
  while(getline(readStr, line)){
    PersonInfo info;
    record.clear();
    record.str(line);
    record >> info.name;
    while(record >> word)
      info.phones.push_back(word);
    people.push_back(info);
  }

  for(const auto& entry : people){
    ostringstream formatted, badNums;
    for(const auto &nums : entry.phones){
      if(!valid(nums))
        badNums << " " << nums;
      else
        formatted << " " << format(nums);
    }
    if(badNums.str().empty())
      cout << entry.name << " " << formatted.str() << endl;
    else
      cerr << "input error: " << entry.name << 
      " invalid number(s) " << badNums.str() << endl;
  }

  return 0;
} // main

bool valid(const string &str){
  return isdigit(str[0]);
} // valid

string format(const string &str){
  return str;
} // format
