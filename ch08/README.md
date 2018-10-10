## ex8.01
> Write a function that takes and returns an istream&. The function should read 
> the stream until it hits end-of-file. The function should print what it reads 
> to the standard output. Reset the stream so that it is valid before returning 
> the stream.
```cpp
istream& func(istream &is){
  std::string str;
  while(is >> str)
    std::cout << str << std::endl;
  is.clear();
  return is;
}
```

## ex8.02
> Test your function by calling it, passing cin as an argument.

[code](ex8_02.cpp)

## ex8.03
> What causes the following while to terminate?
```cpp
while (cin >> i) /* ... */
```

if `cin` operation returns badbit, failbit or eofbit.

## ex8.04
> Write a function to open a file for input and read its contents into a vector 
> of strings, storing each line as a separate element in the vector.

