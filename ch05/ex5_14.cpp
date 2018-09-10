#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
  string word;
  vector<string> wordVec;
  cout << "### input a series of words:\n";
  while(cin >> word) wordVec.push_back(word);

  if(wordVec.size() == 0){
    cout << "### no words input, exit!\n";
    exit(0);
  }

  vector<int> cntWord(wordVec.size(), 0);
  for(int i = 0; i < wordVec.size(); ++i){
    int cnt = 0;
    for(int j = 0; j < wordVec.size(); ++j){
      if(wordVec[i] == wordVec[j]) cnt += 1;
      else continue;
    }
    cntWord[i] = cnt;
  }

  int maxVal = *std::max_element(cntWord.begin(), cntWord.end());
  for(int i = 0; i < wordVec.size(); ++i){
    if(cntWord[i] == maxVal){
      cout << wordVec[i] << " occured " << cntWord[i] << " times.\n";
      break;
    }
    else continue;
  }
  return 0;
} // main
