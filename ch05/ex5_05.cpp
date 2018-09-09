#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
  int numGrade = 0;
  string lettGrade;
  vector<string> score = {"F", "D", "C", "B", "A", "A++"};
  cout << "### input the numeric grade:\n";
  while(cin >> numGrade){
    if(numGrade < 60) lettGrade = score[0];
    else{
      lettGrade = score[(numGrade - 50)/10];
      if(numGrade != 100 && numGrade % 10 > 7) lettGrade += "+";
      else if(numGrade != 100 && numGrade % 10 < 3) lettGrade += "-";
    }
    cout << lettGrade << endl;
  }
  return 0;
} // main
