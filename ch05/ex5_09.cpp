#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string text;
  cout << "### Input text:\n";
  while(cin >> text){
    int countVowel = 0;
    for(auto c : text){
      if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        countVowel += 1;
      else continue;
    }
    cout << countVowel << endl;
  }
  return 0;
} // main
