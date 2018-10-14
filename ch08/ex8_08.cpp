#include<iostream>
#include<fstream>
#include "../ch07/ex7_06.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::ifstream;
using std::ofstream;

int main(int argc, char** argv){
  Sales_data total;
  ifstream input(argv[1]);
  ofstream output(argv[2], ofstream::app);

  if(read(input, total)){
    Sales_data trans;
    while(read(input, trans)){
      if(total.bookNo == trans.bookNo){
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
      }
      else{
        total.units_sold = trans.units_sold;
        total.revenue = trans.revenue;
      }
    }
    output << total.bookNo << "\t" << total.units_sold << "\t" << 
    total.revenue << endl;
  }else{
    cerr << "No data?!" << endl;
    return -1;
  }
  return 0;
} // main
