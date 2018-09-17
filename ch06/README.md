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

```cpp
bool compare(const matrix&, const matrix&);

vector<int>::iterator change_val(int, vector<int>::iterator);
```

## ex6.19
> Given the following declarations, determine which calls are legal and which 
> are illegal. For those that are illegal, explain why.
```cpp
double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
(a) calc(23.4, 55.1);
(b) count("abcda", 'a');
(c) calc(66);
(d) sum(vec.begin(), vec.end(), 3.8);
```

(a) illegal, only one parameter;

(b) legal;

(c) legal;

(d) legal;

## ex6.20
> When should reference parameters be references to const? What happens if we 
> make a parameter a plain reference when it could be a reference to const?

When we want to read the parameter, but don't want to write the parameter, use
reference to const.

## ex6.21
> Write a function that takes an int and a pointer to an int and returns the 
> larger of the int value or the value to which the pointer points. What type 
> should you use for the pointer?

[code](ex6_21.cpp)

## ex6.22
> Write a function to swap two int pointers.

[code](ex6_22.cpp)

## ex6.23
> Write your own versions of each of the print functions presented in this 
> section. Call each of these functions to print i and j defined as follows:
> int i = 0, j[2] = {0, 1};

[code](ex6_23.cpp)

## ex6.24
> Explain the behavior of the following function. If there are problems in the 
> code, explain what they are and how you might fix them.
```cpp
void print(const int ia[10]){
  for (size_t i = 0; i != 10; ++i)
   cout << ia[i] << endl;
}
```
This function wants to print all the elements of an array. 

because we cannot copy an array, we cannot pass an array by value. In C++,
a parameter declared as int ia[10] or as int ia[1024] is actually declared
as int *ia.

```cpp
void print(const int (&ia)[10]){
  for(size_t i = 0; i != 10; ++i)
    cout << ia[10] << endl;
}
```

## ex6.25
> Write a main function that takes two arguments. Concatenate the supplied 
> arguments and print the resulting string.

[code](ex6_25.cpp)

## ex6.26
> Write a program that accepts the options presented in this section. Print the 
> values of the arguments passed to main.

[code](ex6_25.cpp)

## ex6.27
> Write a function that takes an initializer_list<int> and produces the sum of 
> the elements in the list.

[code](ex6_27.cpp)

## ex6.28
> In the second version of error_msg that has an ErrCode parameter, what is the 
> type of elem in the for loop?

const reference bound to string.

## ex6.29
> When you use an initializer_list in a range for would you ever use a reference
> as the loop control variable? If so, why? If not, why not?

[*Pezy's answer:*](https://github.com/pezy/CppPrimer/tree/master/ch06)
Depends on the type of elements of initializer_list. When the type is PODType, 
reference is unnecessary. Because POD is cheap to copy(such as int). Otherwise,
Using reference(const) is the better choice.

## ex6.30
> Compile the version of str_subrange as presented on page 223 to see what your 
> compiler does with the indicated errors.

error: non-void function 'str_subrange' should return a value [-Wreturn-type]

return;

1 error generated.

## ex6.31
> When is it valid to return a reference? A reference to const?

When you can find the preexist object that the reference bound;

When you can find the preexist const object that the reference bound.

## ex6.32
> Indicate whether the following function is legal. If so, explain
> what it does; if not, correct any errors and then explain it.

```cpp
int &get(int *arry, int index){ return arry[index];} 
int main() {
  int ia[10];
  for (int i = 0; i != 10; ++i)
    get(ia, i) = i;
}
```

legal, it assigns the index value to the array.

## ex6.33
> Write a recursive function to print the contents of a vector.

[code](ex6_33.cpp)

## ex6.34
> What would happen if the stopping condition in factorial were
> if(val != 0)

~~The output will not change.~~

Two situations can happen: case1, if the argument is positive, recursion
stops at 0. case2, if the argument is negative, recursion would never
stop. As a result, a stack overflow would occur.

## ex6.35
> In the call to fact, why did we pass val - 1 rather than val--?

Because val-- will return val, therefore, var will always be the parameter
of this function, as a result, the function will never stop.

## ex6.36
> Write the declaration for a function that returns a reference to an array of 
> ten strings, without using either a trailing return, decltype, or a type 
> alias.
```cpp
string (&func(string (&arrStr)[10]))[10];
```

## ex6.37
> Write three additional declarations for the function in the previous exercise.
> One should use a type alias, one should use a trailing return, and the third 
> should use decltype. Which form do you prefer and why?

```cpp
using strT = string[10];
strT& func(strT& arrStr); // use type alias

auto func(strT& arrStr) -> string&[10]; // use trailing return 

decltype(arrStr) &func(strT& arrStr); // use decltype
```

## ex6.38
> Revise the arrPtr function on to return a reference to the array.
```cpp
decltype(odd) &arrPtr(int i){
  return(i % 2) ? odd : even;
}
```

## ex6.39
> Explain the effect of the second declaration in each one of the following sets
> of declarations. Indicate which, if any, are illegal.
```cpp
(a) int calc(int, int);
    int calc(const int, const int);
(b) int get(); 
    double get();
(c) int *reset(int *); 
    double *reset(double *);
```

(a) ~~illegal;~~ legal, repeated declarations(without definition) are legal in 
C++;

(b) ~~legal;~~ illegal, only the return type is different;

(c) legal, the parameter type is different and return type is changed.

