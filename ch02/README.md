## ex2.01
> What are the differences between int, long, long long, and short? Between an 
> unsigned and a signed type? Between a float and a double?

The minimum size of int is 8 bits, while long is 16 bits and long long is 32 bits.
An unsigned type represents only values greater than or equal to zero, while signed
type represents negative or positive values.
Float is single-precision floating-point while double is double-precision floating-point,
it means that float has 6 significant digits while double has 10.

## ex2.02
> To calculate a mortagage payment, what types would you use for the rate, principal, and 
> payment? Explain why you selected each type.

I would like to use double for the rate, principal and payment.

## ex2.03
> What output will the following code produce?
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```
32 4294967264 32 -32 0 0

## ex2.04
> Write a program to check whether your predictions were correct. If not, study this
> section until you understand what the problem is.
Omitted.

## ex2.05
> Determine the type of each of the following literals. Explain the differences among 
> the literals in each of the four examples:
> (a) 'a', L'a', "a", L"a"
> (b) 10, 10u, 10L, 10uL, 012, 0xC
> (c) 3.14, 3.14f, 3.14L
> (d) 10, 10u, 10., 10e-2

(a) char, wide char, string, wide string
(b) int, unsigned int, long int, unsigned long int, octal, hexadecimal
(c) double, float, long double
(d) int, unsigned int, double, double

## ex2.06
> What, if any, are the differences between the following definitions:
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```
The definitions in first line are decimals, while in second line, are octals.

## ex2.07
> What values do these literals represent? What type does each have?
> (a) "Who goes with F\145rgus?\012"
> (b) 3.14e1L
> (c) 1024f
> (d) 3.14L

(a) Who goes with Fergus(new line), string
(b) 31.4, long double
(c) illegal, 1024 is integer, float int is not exist.
(d) 3.14, long double

## ex2.08
> Using escape sequences, write a program to print 2M followed by a new line. Modify
> the program to print 2, then a tab, then an M, followed by a newline.
```cpp
#include<iostream>

int main(){
  std::cout << "2\115\12" << std::endl;
  std::cout << "2\t\115\12" << std::endl;
} // main
```

## ex2.09
> Explain the following definitions. For those that are illegal, explain what's wrong and 
> how to correct it.
> (a) std::cin >> int input_value;
> (b) int i = { 3.14 };
> (c) double salary = wage = 9999.99;
> (d) int i = 3.14;

(a) It is illegal, 
```cpp
int input_value;
std::cin >> input_value;
```
(b) If you compile this code without argument -std=c++11, you will get warning information.
However, if you compile this code with -std=c++11, you will get error information.
(c) It is illegal,
```cpp
double salary = 9999.99;
double wage = salary;
```
(d) It is legal, but the value will be truncated.

## ex2.10
> What are the initial values, if any, of each of the following wariables?
```cpp
std::string global_str;
int global_int;
int main(){
  int local_int;
  std::string local_str;
}
```

Variables defined outside any function body are initialized to zero, in this case, 
global_str should be empty, global_int = 0. Variables of built-in type defined inside
a function are uninitialized, in this case, the value of an uninitialized variable  of 
built-in type is undefined.

## ex2.11
> Explain whether each of the following is a declaration or a definition:
> (a) extern int ix = 1024;
> (b) int iy;
> (c) extern int iz;

(a) Any declaration that includes an explicit initializer is a definition. In this case,
this is definition;
(b) It is definition;
(c) It is declaration.

## ex2.12
> Which, if any, of the following names are invalid?
> (a) int double = 3.14; (b) int _;
> (c) int catch-22; (d) int 1_or_2 = 1;
> (e) double Double = 3.14;

(a),(c),(d) are invalid.

## ex2.13
> What is the value of j in the following program?
```cpp
int i = 42;
int main(){
  int i = 100;
  int j = i;
}
```
j = 100

## ex2.14
> Is the following program legal? If so, what values are printed?
```cpp
int i = 100, sum = 0;
for(int i = 0; i != 10; ++i)
  sum += i;
std::cout << i << " " << sum << std::endl;
```

The program is legal, the result should be 
100 45

## ex2.15
> Which of the following definitions, if any, are invalid? Why?
> (a) int ival = 1.01;    (b) int &rval1 = 1.01;
> (c) int &val2 = ival;   (d) int &rval3;

(b) is invalid, because initializer is float-point value, while reference bound to int.
(d) is invalid, because reference must be initialized.

## ex2.16
> Which, if any, of the following assignments are invalid? If they are valid, explain what they 
> do.
> int i = 0, &r1 = i; double d = 0, &r2 = d;
> (a) r2 = 3.14159; (b) r2 = r1;
> (c) i = r2;       (d) r1 = d;

(a) is valid, let d = 3.14159
(b) is valid, let d = i;
(c) is valid, let i = d;
(d) is valid, let i = d;

## ex2.17
> What does the following code print?
> int i, &ri = i;
> i = 5, ri = 10;
> std::cout << i << " " << ri << std::endl;

10 10
