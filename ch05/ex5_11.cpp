#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main(){
  string text;
  cout << "### Input text:\n";
  while(getline(cin, text)){
    int cntVowel = 0, cntWhiteSpace = 0;
    for(auto c : text){
      if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' ||
      c == 'E' || c == 'I' || c == 'O' || c == 'U')
        cntVowel += 1;

      if(c == ' ' || c == '\t' || c == '\n') cntWhiteSpace += 1;
    }
    cout << "Number of vowel: " << cntVowel << endl;
    cout << "Number of whiteSpace: " << cntWhiteSpace << endl;
  }
  return 0;
} // main
