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
> Write and test your own version of reset that takes a reference.

[code](ex6_11.cpp)

## ex6.12
> Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use references 
> instead of pointers to swap the value of two ints. Which version do you think 
> would be easier to use and why?

[code](ex6_12.cpp)

I think the reference version is much easier to use, because it is much 
easier to understand.

## ex6.13
> Assuming T is the name of a type, explain the difference between a function 
> declared as void f(T) and void f(T&).

void f(T) will copy the object of type T, while void f(T&) avoids to copy the 
object.

## ex6.14
> Give an example of when a parameter should be a reference type. Give an 
> example of when a parameter should not be a reference.
```cpp
int reset(int &a){ // the parameter should be a reference type
  a = 0;
}

// pezy's answer, the parameter should not be a reference type
void print(std::vector<int>::iterator begin, std::vector<int>::iterator end){
  for(std::vector<int>::iterator iter = begin; iter != end; ++iter)
    std::cout << *iter << std::endl;
}
```

## ex6.15
> Explain the rationale for the type of each of find_char’s parameters In 
> particular, why is s a reference to const but occurs is a plain reference? Why
> are these parameters references, but the char parameter c is not? What would 
> happen if we made s a plain reference? What if we made occurs a reference to 
> const?

Because we don't want to change the value of s, therefore, s is a reference to 
const, occurs is a plain reference because it can be changed;

Actually, we can set c as reference;

If we made s a plain reference and made occurs a reference to const, s would be
changable, and occurs unchangable, therefore, occurs = 0.

## ex6.16
> The following function, although legal, is less useful than it might be. 
> Identify and correct the limitation on this function:
```cpp
bool is_empty(string& s) { return s.empty(); }
```

```cpp
bool is_empty(const string& s) { return s.empty(); }
```

This function doesn't change s, therefore, we should use const

## ex6.17
> Write a function to determine whether a string contains any capital letters. 
> Write a function to change a string to all lowercase. Do the parameters you 
> used in these functions have the same type? If so, why? If not, why not?

no, the first function doesn't change the string, hence, the parameters should 
be const, the second function should be plain string.

[code](ex6_17.cpp)

## ex6.18
> Write declarations for each of the following functions. When you write these 
> declarations, use the name of the function to indicate what the function does.
>
> (a) A function named compare that returns a bool and has two parameters that 
>     are references to a class named matrix.
>
> (b) A function named change_val that returns a vector<int> iterator and takes 
>     two parameters: One is an int and the other is an iterator for a 
>     vector<int>.
