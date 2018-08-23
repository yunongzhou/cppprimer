#include<iostream>

int main(){
  int i = 0, *const cp = nullptr;
  int *p1, *const p2 = nullptr;
  const int ic = 2;
  const int *const p3 = &i;
  p3 = &ic;
  return 0;
} // main
