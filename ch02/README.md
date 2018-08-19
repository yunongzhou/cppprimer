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
