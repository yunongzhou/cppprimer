#include<iostream>
#include<stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main(){
  int a, b;
  cout << "### input two integers:\n";
  while(cin >> a >> b){
    try{
      if(b == 0)
        throw runtime_error("Denominator should not be zero.");
      else
        cout << 1.0 * a / b << endl;
    }catch(runtime_error err){
      cout << err.what()
        << "\nTry again? Enter y or n" << endl;
      char c;
      cin >> c;
      if(!cin || c == 'n')
        break;
    }
  }
  return 0;
} // main
