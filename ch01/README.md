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
