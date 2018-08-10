#include<iostream>
#include "Sales_item.h"

int main(){
  Sales_item item1, item2;
  std::cout << "Input two items with same ISBN:";
  std::cin >> item1 >> item2;
  if(item1.isbn() != item2.isbn()){
    std::cerr << "ISBN not the same!";
    exit(0);
  }
  else{
    std::cout << item1 + item2 << std::endl;
  }
  return 0;
} // main
