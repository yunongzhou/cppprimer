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
    char preChar = '\0';
    int cntFF = 0, cntFI = 0, cntFL = 0;
    for(auto c : text){
      if(c == 'i' && preChar == 'f') cntFI += 1;
      else if(c == 'f' && preChar == 'f') cntFF += 1;
      else if(c == 'l' && preChar == 'f') cntFL += 1;
      preChar = c;
    }
    cout << "Number of fi is: " << cntFI << endl;
    cout << "Number of ff is: " << cntFF << endl;
    cout << "Number of fl is: " << cntFL << endl;
  }
  return 0;
} // main
