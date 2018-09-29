#include<string>
#include<iostream>

class Sales_data{
  public:

    // constructors
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s){}
    Sales_data(const std::string &s, unsigned n, double p):
    bookNo(s), units_sold(n), revenue(p*n){}
    Sales_data(std::istream &is){return(is, *this);}


    // define member functions
    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);

  private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    inline double avg_price() const;

    // define non-member functions
    friend std::istream &read(std::istream &, Sales_data &);
    friend std::ostream &print(std::ostream &, Sales_data &);
    friend Sales_data add(const Sales_data &, const Sales_data &);
};

inline double Sales_data::avg_price() const{
  if(units_sold)
    return revenue / units_sold;
  else
    return 0;
} // avg_price

