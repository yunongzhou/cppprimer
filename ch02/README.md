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

## ex2.18
> Write code to change the value of a pointer. Write code to change the value to which the 
> pointer points.
```cpp
#include<iostream>

int main(){
  int val1 = 1.0, val2 = 2.0;
  int *pval = &val1;
  pval = &val2; // change the value of pointer
  *pval = val2; // change the value to which the pointer points
  return 0;
} // main
```

## ex2.19
> Explain the key differences between pointers and references.

* A pointer is an object, it holds the address of another object. However, a reference is not 
a object;
* Reference must be initialized, while pointer doesn't have to.

## ex2.20
> What does the following program do?
```cpp
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
```

1. define integer i equals to 42;
2. p1 is a pointer to int, it points to the address of i;
3. the object that p1 points to, which is i, equals to i*i;

## ex2.21
> Explain each of the following definitions. Indicate whether any are illegal and if so, why?
> int i = 0;
> (a) double *dp = &i; (b) int *ip = i; (c) int *p = &i;

(a) is illegal, because dp is a pointer to int, while i is integer;
(b) is illegal, it is not allowed to assign an integer to pointer;
(c) is legal;

## ex2.22
Assuming p is a pointer to int, explain the following code:
```cpp
if(p) // ...
if(*p) //...
```
If p is null pointer, the condition will be false, if p is not null, the condition will be 
true;
*p is the object that p points to, if *p = 0, the condition in 
the second if statement is false, if *p != 0, the condition in the second if statement 
will be true.

## ex2.23
> Given a pointer, can you determine whether p points to a valid object? If so, how? If not, 
> why?

Obviously, no, we need more information, such as the type of pointer and type of the object
the pointer points to.

## ex2.24
> Why is the initialization of p legal but that of lp illegal?
> int i = 42; void *p = &i; long *lp = &i;

Because p is a special pointer that can hold the address of any object; lp is a pointer 
points to long, however, i is integer, in this case, the initialization is illegal.

## ex2.25
> Determine the types and values of each of the following variables.
> (a) int* ip, i, &r = i; (b) int i, *ip = 0; (c) int* ip, ip2;

(a) ip is pointer points to integer, i is integer, r is reference bound to i.
(b) i is integer, ip is null pointer;
(c) ip is pointer to integer, ip2 is integer.

## ex2.26
> Which of the following are legal? For those that are illegal, explain why.
> (a) const int buf; (b) int cnt = 0;
> (c) cosnt int sz = cnt; (d) ++cnt; ++sz;

(a) if illegal, because const must be initialized.
(b) is legal;
(c) is legal if cnt is defined and initialized;
(d) ++cnt is legal, ++sz is illegal.

## ex2.27
> Which of the following initializations are legal? Explain why.
> (a) int i = -1, &r = 0;
> (b) int *const p2 = &i2;
> (c) const int i = -1, &r = 0;
> (d) const int *const p3 = &i2;
> (e) const int *p1 = &i2;
> (f) const int &const r2;
> (g) const int i2 = i, &r = i;

(a) illegal, because r must be bound to an object;

(b) legal;

(c) legal;

(d) legal;

(e) legal;

(f) illegal, because r2 must be initialized, on the other hand, r2 is reference, 
which is not an object, in this case, it cannot be a constant;

(g) legal;

## ex2.28
> Explain the following definitions. Identify any that are illegal.
> (a) int i, *const cp;
> (b) int *p1, *const p2;
> (c) const int ic, &r = ic;
> (d) const int *const p3;
> (e) const int *p;

(a) define i is an integer, cp is constant pointer, which points to integer, this 
is illegal, because cp must be initialized;

(b) p1 is a pointer, points to integer, p2 is constant pointer which points to 
integer, this definition is illegal, because p2 must be initialized;

(c) ic is a constant integer, r is constant reference which is bound to constant
ic, this is illegal, because ic must be initialized.

(d) p3 is constant pointer, which points to constant integer, this definition is 
illegal, because p3 must be initialized;

(e) p is a pointer which points to constant integer;

## ex2.29
> Using the variables in the previous exercise, which of the following assignments
> are legal? Explain why.
> (a) i = ic;
> (b) p1 = p3;
> (c) p1 = &ic;
> (d) p3 = &ic;
> (e) p2 = p1;
> (f) ic = *p3;

(a) legal;

(b) illegal, p3 is const pointer points to const integer, p1 is pointer points to integer;

(c) illegal, p1 is pointer, while ic is const integer;

(d) illegal, p3 is const pointer, it cannot be changed;

(e) illegal, p2 is constant pointer, it cannot be changed;

(f) illegal, ic is constant integer, it cannot be changed;

## ex2.30
> For each of the following declarations indicate whether the object being declared has 
> top-level or low-level const.
> const int v2 = 0; int v1 = v2;
> int *p1 = &v1, &r1 = v1;
> const int *p2 = &v2, *const p3 = &i, &r2 = v2;

top-level, low-level, top-level

## ex2.31
> Given the declarations in the previous exercise determine whether the 
> following assignments are legal. Explain how the top-level or low-level 
> const applies in each case.
> r1 = v2;
> p1 = p2;
> p2 = p1;
> p1 = p3;
> p2 = p3;

r1 = v2 is legal;

p1 = p2 is illegal, because p1 is pointer, while p2 is pointer to constant;

p2 = p1 is legal, because we can convert int* to const int*;

p1 = p3 is illegal, because p3 has low-level const, while p1 is plain pointer;

p2 = p3 is legal;

## ex2.32
> Is the following code legal or not? If not, how might you make it legal?
> int null = 0, *p = null;

It is illegal
```cpp
int null = 0, *p = nullptr;
```
or
```cpp
int null = 0, *p = &null;
```

## ex2.33
> Using the variable definitions from this section, determine what happens in each 
> of these assignments:
> a = 42; b = 42; c = 42;
>
> d = 42; e = 42; g = 42;

a is an int, in this case, this assignment is to assign 42 to a;

b is an int, in this case, this assignment is to assign 42 to b;

c is an int, did the samething as b;

d is a pointer to integer, in this case, the assignment is error;

e is a pointer to const int, the assignment is error;

g is const int reference that bound to ci, in this case, the assignment is error;

## ex2.35
> Determine the types deduced in each of the following definitions. Once you've found
> out the types, write a program to see whether you were correct.
```cpp
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;
```

j is `int`, k is `const int&`, p is `int*`, j2 is `const int`, k2 is `const int&`;

## ex2.36
> In the following code, determine the type of each variable and the value each variable
> has when the code finishes:
```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```
a is `int`, b is `int`, c is `int`, d is `int&`, after code finish,
a = 4, b = 4, c = 4, d = 4.

## ex2.37
> Assignment is an example of an expression that yields a reference type. The type is a
> reference to the type of the left-hand operand. That is, if i is an int, then the type
> of the expression i = x is int&. Using that knowledge, determine the type and value of
> each variable in this code:
```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```
a is `int`, a = 3;

b is `int`, b = 4;

c is `int`, c = 3;

d is `int&`, d = 3;

## ex2.38
> Describe the differences in type deduction between decltype and auto. Give an example
> of an expression where auto and decltype will deduce the same type and an example where
> they will deduce differing types.

When the expression to which we apply `decltype` is a variable, `decltype` returns the 
type of that variable, including top-level `const` and reference. However, when `auto` 
ignores the top-level `const`. Another important difference between `decltype` and `auto`
is that the deduction done by `decltype` depends on the form of its given expression.
```cpp
#include<iostream>
int main(){
  int a = 3, b = 4;
  const int c = 3;
  const int d = 4;

  // the same type
  auto e = a; // e is int
  decltype(a) f = a; //f is int

  // different type
  auto g = c; // g is int
  decltype(d) h = d; // h is const int
  
  return 0;
} // main
```

## ex2.39
> Compile the following program to see what happens when you forget the semicolon after a 
> class definition. Remember the message for future reference.
```cpp
struct Foo{/* empty */} // Note: no semicolon
int main(){
  return 0;
} 
```

error: expected ';' after struct

## ex2.40
> Write your own version of the Sales_data class.
```cpp
struct Sales_data{
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
```


