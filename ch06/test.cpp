#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val){
  if(val > 1)
    return fact(val--) * val;
  return 1;
}

int main(){
  cout << fact(5) << endl;
  return 0;
} // main
