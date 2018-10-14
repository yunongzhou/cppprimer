#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using std::vector;
using std::string;
using std::getline;
using std::ifstream;
using std::cout;
using std::endl;

// function
void readFile(const string& fileName, vector<string> &vec){
  ifstream read(fileName);
  if(read){
    string buf;
    while(read >> buf)
      vec.push_back(buf);
  }
}

int main(){
  vector<string> vec;
  readFile("./test.dat", vec);
  for(auto c : vec) cout << c << endl;
  return 0;
} // main
