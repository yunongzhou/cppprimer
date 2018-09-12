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

[code](ex6_04.cpp)

## ex6.06
> 
