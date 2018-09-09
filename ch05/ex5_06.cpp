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
  cout << "### Input numeric grade:\n";
  while(cin >> numGrade){
    lettGrade = (numGrade < 60) ? score[0] : score[(numGrade - 50) / 10];

    lettGrade += (numGrade == 100 || numGrade < 60) ? "" :
    (numGrade % 10 > 7) ? "+" : (numGrade % 10 < 3) ? "-" : "";

    cout << lettGrade << endl;
  }
  return 0;
} // main
