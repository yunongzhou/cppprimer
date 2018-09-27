#include<string>
#include<iostream>

class Person{
  
  friend std::istream &read(std::istream &, Person &);
  friend std::ostream &print(std::ostream &, const Person &);

  private:
    std::string name;
    std::string address;

  public:
    // constructors
    Person() = default;
    Person(const std::string &s1, const std::string &s2):name(s1), address(s2){}
    Person(std::istream &);

    // member functions
    const std::string &getName() const{return name;}
    const std::string &getAddress() const{return address;}
};

std::istream &read(std::istream &is, Person &person){
  is >> person.name >> person.address;

  return is;
} // read

std::ostream &print(std::ostream &os, const Person &person){
  os << person.name << " " << person.address;

  return os;
} // print

Person::Person(std::istream &is){
  read(is, *this);
}
