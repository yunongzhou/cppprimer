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
