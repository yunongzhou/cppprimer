## ex1.3
> Write a program to print Hello, World on a standard output.
```cpp
#include<iostream>

int main(){
  std::cout << "Hello, World" << std::endl;
  return 0;
}
```

## ex1.4
> Our program used the addition operator,+, to add two numbers. Write
> a program that uses the multiplication operator,*, to print the product
> instead.
```cpp
#include<iostream>

int main(){
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The product of " << v1 << " and " << v2 << 
  " is " << v1 * v2 << std::endl;
  return 0;
} // main
```

## ex1.5
> We wrote the output in one large statement. Rewrite the program to use
> a seperate statement to print each operand.
```cpp
#include<iostream>

int main(){
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1;
  std::cout << " and " << v2;
  std::cout << " is " << v1 + v2;
  std::cout << std::endl;
  return 0;
} // main
```

## ex1.6
> Explain whether the following program fragment is legal.
```cpp
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```
> If the program is legal, what does it do? If the program is not legal, why not?
> How would you fix it?

It is not legal, because the left hand operand of `<<` operator must be an ostream object.
Fix it.
```cpp
std::cout << "The sum of " << v1;
std::cout << " and " << v2;
std::cout << " is " << v1 + v2;
std::cout << std::endl;
```
## ex1.7
> Compile a program that has incorrectly nested comments.

```cpp
#include<iostream>

int main(){
   /* /*Comment pairs do not nest.*/ */
  return 0;
}
```

## ex1.8
> Indicate which, if any, of the following output statements are legal:
```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```
> After you've predicted what will happen, test your answers by compiling a program with
> each of these statements. Correct any errors you encounter.

The first statement is correct.
The second statement is correct.
The third statement is illegal, the correct statement should be
```cpp
std::cout << /* */"*/";
```
The fourth statement is illegal, the correct statement shoule be 
```cpp
std::cout << /*  */ "/* " /* */;
```

## ex1.9
> Write a program that uses a while to sum the numbers from 50 to 100.
```cpp
#include<iostream>

int main(){
  int n = 50, sum = 0;
  while(n <= 100){
    sum += n;
    ++n;
  }
  std::cout << sum << std::endl;
} // main
```

## ex1.10
> In addition to the ++ operator that adds 1 to its operand, there is a decrement
> operator (--) that substracts 1. Use the decrement operator to write a while that
> prints the numbers from ten down to zero.
```cpp
#include<iostream>

int main(){
  int n = 10;
  while(n >= 0){
    std::cout << (n--) << std::endl;
  }
  return 0;
}
```

## ex1.11
> Write a program that prompts the user for two integers. Print each number in the range
> specified by those two integers.
```cpp
#include<iostream>

int main(){
  std::cout << "Enter two integers:";
  int a, b, left, right;
  std::cin >> a >> b;
  left = a < b ? a : b;
  right = a > b ? a : b;
  while( left <= right){
    std::cout << (left++) << " ";
  }
  return 0;
} // main
```

## ex1.12
> What does the following for loop do? What is the final value of sum?
```cpp
int sum = 0;
for(int i = -100; i <= 100; ++i)
  sum += i;
```
The for loop compute the sum of integers from -100 to 100. The solution should be 0.

## ex1.13
> Rewrite the exercises from 1.4.1(p.13) using for loops.
```cpp
#include<iostream>

int main(){
  int sum = 0;
  for(int i = 50; i <= 100; sum+=(i++));
  std::cout << sum << std::endl;
} // main
```
```cpp
#include<iostream>

int main(){
  for(int n = 10; n >= 0; std::cout << n-- << std::endl);
  return 0;
} // main
```
```cpp
#include<iostream>

int main(){
  std::cout << "Enter two integers:";
  int a, b, left, right;
  std::cin >> a >> b;
  left = a < b ? a : b;
  right = a > b ? a : b;
  for(int i = left; left <= right; std::cout << left++ << "\n");
  return 0;
} // main
```

## ex1.14
> Compare and contrast the loops that used a for with those using a while.
> Are there advantages or disadvantages to using either form?

TODO

## ex1.15
> Write programs that contain the commen errors discussed in the box on page 16. 
> Familiarize yourself with the messages the compiler generates.

TODO

## ex1.16
>Write your own version of a program that prints the sum of a set of integers read from cin.
```cpp
#include<iostream>

int main(){
  int n;
  int sum = 0;
  for(sum = 0; std::cin >> n; sum += n);
  std::cout << sum << std::endl;
  return 0;
} // main
```
