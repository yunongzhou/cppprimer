#include<iostream>
#include "Sales_item.h"

int main(){
  Sales_item item1, item2;
  int countItem;
  if(std::cin >> item1){
    countItem = 1;
    while(std::cin >> item2){
      if(item1.isbn() == item2.isbn()){
        countItem++;
      }
      else{
        std::cout << item1.isbn() << " occurs " << countItem << " times.\n";
        countItem = 1;
        item1 = item2;
      }
    }
    std::cout << item1.isbn() << " occurs " << countItem << " time.\n";
  }
  return 0;
}
