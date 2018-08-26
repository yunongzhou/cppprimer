#include<iostream>

struct Sales_data{
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main(){
  // ex1.20
  Sales_data data;
  double price;

  while(std::cin >> data.bookNo >> data.units_sold >> price){
    data.revenue = price * data.units_sold;
    std::cout << data.bookNo << "\t" << data.units_sold << "\t" << 
    data.revenue << std::endl;
  }

  //ex1.21
  Sales_data book1, book2;
  double price1, price2;
  std::cin >> book1.bookNo >> book1.units_sold >> price;
  std::cin >> book2.bookNo >> book2.units_sold >> price;
  book1.revenue = price1 * book1.units_sold;
  book2.revenue = price2 * book2.units_sold;
  if(book1.bookNo == book2.bookNo){
    double sum_revenue = book1.revenue + book2.revenue;
    int sum_sold = book1.units_sold + book2.units_sold;
    std::cout << book1.bookNo << "\t" << sum_sold << "\t" << 
    sum_revenue << std::endl;
  }
  else{
    std::cout << "ISBN are not the same." << std::endl;
    exit(0);
  }

  //ex1.22
  Sales_data book;
  double bookPrice;
  int sum_sold = 0;
  double sum_revenue = 0.0;
  while(std::cin >> book.bookNo >> book.units_sold >> price){
    sum_sold += book.units_sold;
    sum_revenue += price * book.units_sold;
  }
  std::cout << book.bookNo << "\t" << sum_sold << "\t" << sum_revenue << 
  std::endl;
  return 0;
} // main
