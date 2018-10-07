#include<string>
#include<iostream>

class Sales_data{
  public:

    // constructors
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s){}
    Sales_data(const std::string &s, unsigned n, double p):
    bookNo(s), units_sold(n), revenue(p*n){}
    Sales_data(std::istream &is);

    // delegating constructors
    Sales_data(): Sales_data("", 0, 0){}
    Sales_data(std::sring s): Sales_data(s, 0, 0) {}
    Sales_data(std::istream &is): Sales_data(){
      read(is *this);
    }


    // define member functions
    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);

  private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const;

    // define non-member functions
    friend std::istream &read(std::istream &, Sales_data &);
    friend std::ostream &print(std::ostream &, Sales_data &);
    friend Sales_data add(const Sales_data &, const Sales_data &);
};

// member functions
Sales_data& Sales_data::combine(const Sales_data& rhs){
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data::Sales_data(std::istream &is){
  read(is, *this);
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

