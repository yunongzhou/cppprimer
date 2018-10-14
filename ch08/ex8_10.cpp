#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>

using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;

int main(int argc, char** argv){
  vector<string> strVec;
  ifstream input(argv[1]);
  if(!input.is_open()) std::cout << "no data file" << std::endl;
  else{
    while(!input.eof()){
      string str;
      getline(input, str);
      strVec.push_back(str);
    }
  }

  for(auto& s : strVec){
    istringstream readStr(s);
    string word;
    while(readStr >> word) std::cout << word << std::endl;
  }

  return 0;
} // main
