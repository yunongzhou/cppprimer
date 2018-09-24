#include<iostream>
#include "ex7_02.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(){
  Sales_data total;
  if(cin >> total.bookNo >> total.units_sold >> total.revenue){
    Sales_data trans;
    while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
      if(total.bookNo == trans.bookNo){
        total.combine(trans);
      }
      else{
        cout << total.bookNo << "\t" << total.units_sold << "\t" << 
        total.revenue << endl;
      }
    }
    cout << total.bookNo << "\t" << total.units_sold << "\t" << 
    total.revenue << endl;
  }else{
    cerr << "No data?!" << endl;
    return -1;
  }
  return 0;
} // main
