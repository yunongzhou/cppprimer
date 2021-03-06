#include<string>
#include<iostream>

struct Sales_data;
std::istream &read(std::istream&, Sales_data&);

struct Sales_data{
  // constructors
  Sales_data() = default;
  Sales_data(const std::string &s):bookNo(s){}
  Sales_data(const std::string &s, unsigned n, double p):
  bookNo(s), units_sold(n), revenue(p*n){}
  Sales_data(std::istream &is){
    read(is, *this);
  }


  // define member functions
  std::string isbn() const {return bookNo;}
  Sales_data& combine(const Sales_data&);
  double avg_price() const;

  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  // define non-member functions
  std::ostream &print(std::ostream &, Sales_data &);
  Sales_data add(const Sales_data &, const Sales_data &);
};

// member functions
Sales_data& Sales_data::combine(const Sales_data& rhs){
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}


// non-member functions
std::istream &read(std::istream &is, Sales_data &item){
  double price = 0.0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;

  return is;
} // read

std::ostream &print(std::ostream &os, Sales_data &item){
  os << item.isbn() << " " << item.units_sold << " " << 
  item.revenue;

  return os;
} // print

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
  Sales_data sum = lhs;
  sum.combine(rhs);

  return sum;
} // add

double Sales_data::avg_price() const{
  if(units_sold)
    return revenue / units_sold;
  else
    return 0;
} // avg_price

