#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
  string word;
  vector<string> wordVec;
  while(cin >> word){
    wordVec.push_back(word);
  }

  for(decltype(wordVec.size()) i = 0; i < wordVec.size(); ++i){
    for(auto &c : wordVec[i]){
      if(islower(c)) c = toupper(c);
    }
    cout << wordVec[i] << " ";
    if((i+1)%8 == 0) cout << endl;
  }
  return 0;
} // main
