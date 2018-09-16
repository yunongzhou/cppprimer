#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void print(const int*, size_t);

int main(){
  int i = 0, j[2] = {0, 1};
  int *p1 = nullptr, *p2 = nullptr;
 
  p1 = &i, p2 = &j[0];
  
  print(p1, sizeof(i)/sizeof(int));
  print(p2, sizeof(j)/sizeof(int));

  return 0;
} // main

void print(const int *a, size_t n){
  for(size_t i = 0; i < n; ++i)
    cout << *a++ << endl;
} // print
