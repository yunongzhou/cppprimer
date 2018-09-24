#include<string>
#include<iostream>

struct Person{
  std::string name;
  std::string address;

  // member functions
  const std::string &getName() const{return name;}
  const std::string &getAddress() const{return address;}

  // non-member functions
  std::istream &read(std::istream &, Person &);
  std::ostream &print(std::ostream &, const Person &);
};

std::istream &read(std::istream &is, Person &person){
  is >> person.name >> person.address;

  return is;
} // read

std::ostream &print(std::ostream &os, const Person &person){
  os << person.name << " " << person.address;

  return os;
} // print
