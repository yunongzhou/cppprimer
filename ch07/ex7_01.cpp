#include<iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(){
  Sales_data total;
  if(cin >> total.isbn >> total.units_sold >> total.revenue){
    Sales_data trans;
    while(cin >> trans.isbn >> trans.units_sold >> trans.revenue){
      if(total.isbn == trans.isbn){
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
      }
      else{
        total.units_sold = trans.units_sold;
        total.revenue = trans.revenue;
      }
    }
    cout << total.isbn << "\t" << total.units_sold << "\t" << 
    total.revenue << endl;
  }else{
    cerr << "No data?!" << endl;
    return -1;
  }
  return 0;
} // main
