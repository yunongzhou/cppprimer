## ex6.01
> What is the difference between a parameter and an argument?

Parameters are local variables declared inside the function parameter lis.
Parameters are initialized by the arguments provided in each function call.

Arguments are values supplied in a function call that are used to initialize
the function's parameters.

## ex6.02
> Indicate which of the following functions are in error and why. Suggest 
> how you might correct the problems.
```cpp
(a) int f() {
      string s;
      //...
      return s;
    }

(b) f2(int i){/* ... */}

(c) int calc(int v1, int v1) /* ... */ }

(d) double square(double x) return x * x;
```

```cpp
(a) string f() {
      string s;
      //...
      return s;
    }

(b) void f2(int i){/* ... */}

(c) int calc(int v1, int v2){ /* ... */ }

(d) double square(double x){ return x * x;}
```

## ex6.03
> Write and test your own version of fact.

[code](ex6_03.cpp)

## ex6.04
> Write a function that interacts with the user, asking for a number and ]
> generating the factorial of that number. Call this function from main.

Refer [ex6.03](ex6_03.cpp)

## ex6.05
> Write a function to return the absolute value of its argument.

[code](ex6_05.cpp)

## ex6.06
> Explain the differences between a parameter, a local variable, and a local 
> static variable. Give an example of a function in which each might be useful.

Parameter: local variable declared inside the function parameter list;

local variable: variable defined inside a block;

local static variable: local variable whose value persists across calls to the
function. Local static variable that is created and initialized before control
reaches their use and is destroyed when the program ends.

```cpp
int func(int a){ // a is parameter
  static int n = 1; // n is local static variable

  for(int i = a; a > 0; --i){ // i is local variable
    n *= i;
  }
  return n;
} // func
```

## ex6.07
> Write a function that returns 0 when it is first called and then generates 
> numbers in sequence each time it is called again.

[code](ex6_07.cpp)

## ex6.08
> Write a header file named Chapter6.h that contains declarations for the 
> functions you wrote for the exercises in § 6.1 (p. 205).

[code](ex6_08.h)

## ex6.09
> Write your own versions of the fact.cc and factMain.cc files. These files 
> should include your Chapter6.h from the exercises in the previous section. 
> Use these files to understand how your compiler supports separate compilation.

[fact.cpp](fact.cpp)

[factMain.cpp](factMain.cpp)

## ex6.10
> Using pointers, write a function to swap the values of two ints. Test the 
> function by calling it and printing the swapped values.

[code](ex6_10.cpp)

## ex6.11
> 
