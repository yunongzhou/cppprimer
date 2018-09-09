#include<iostream>

using std::cout;
using std::endl;

int main(){
  cout << "Size of void is " << sizeof(std::nullptr_t) << endl;

  cout << "Size of bool is " << sizeof(bool) << endl;

  cout << "Size of signed char is " << sizeof(signed char) << endl;
  cout << "Size of unsigned char is " << sizeof(unsigned char) << endl;
  cout << "Size of char is " << sizeof(char) << endl;
  cout << "Size of wchar_t is " << sizeof(wchar_t) << endl;
  cout << "Size of char16_t is " << sizeof(char16_t) << endl;
  cout << "Size of char32_t is " << sizeof(char32_t) << endl;

  cout << "Size of short is " << sizeof(short) << endl;
  cout << "Size of int is " << sizeof(int) << endl;
  cout << "Size of long is " << sizeof(long) << endl;
  cout << "Size of long long is " << sizeof(long long) << endl;


  cout << "Size of float is " << sizeof(float) << endl;
  cout << "Size of double is " << sizeof(double) << endl;
  cout << "Size of long double is " << sizeof(long double) << endl;
  return 0;
} // main
