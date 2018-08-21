#include<iostream>

int main(){
  int val1 = 1.0, val2 = 2.0;
  int *pval = &val1;
  pval = &val2; // change the value of pointer
  *pval = val2; // change the value to which the pointer points
  return 0;
} // main
