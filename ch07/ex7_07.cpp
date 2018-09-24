#include "ex7_06.h"
#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(){
  Sales_data total;
  if(read(cin, total)){
    Sales_data trans;
    while(read(cin, trans)){
      if(total.isbn() == trans.isbn())
        //add(total, trans);
        total.combine(trans);
      else{
        print(cout, total);
      }
    }
    print(cout, total);
  }
  else{
    cerr << "No data?!" << endl;
    return -1;
  }
  return 0;
} // main
