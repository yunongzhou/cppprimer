#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  int grade;
  cout << "### Input the grade:\n";
  cin >> grade;
  string finalGrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? 
  "low pass" : "fail";
  cout << finalGrade << endl;
  return 0;
} // main
