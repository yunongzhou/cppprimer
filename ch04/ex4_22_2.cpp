#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
  int grade = 0;
  cout << "### input grade:\n";
  cin >> grade;
  if(grade > 90) cout << "high pass\n";
  else if(grade > 75) cout << "pass\n";
  else if(grade > 60) cout << "low pass\n";
  else cout << "fail\n";
  return 0;
} // main
