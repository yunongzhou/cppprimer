## ex3.02
> Write a program to read the standard input a line at a time. Modify your program
> to read a word a time.

[part1](ex3_02_1.cpp)

[part2](ex3_02_2.cpp)

## ex3.03
> Explain how whitespace characters are handled in the string input operator and 
> in the getline function.

The string input operator reads and discards any leading whitespace. It then reads
characters until the next whitespace character is encountered.

The `getline` function reads the given stream up to and including the first newline
and stores what it reads -- not including the newline -- in its string argument. After
`getline` sees a newline, even if it is the first character in the input, it stops 
reading and returns.

## ex3.04
> Write a program to read two strings and report whether the strings are equal.
> If not, report which of the two is larger. Now change the program to report 
> whether the strings have the same length, and if not, report which is longer.

[part1](ex3_04_1.cpp)

[part2](ex3_04_2.cpp)

## ex3.05
> Write a program to read strings from the standard input, concatenating what is 
> read into one large string. Print the concatenated string. Next, change the program
> to separate adjacent input strings by space.

[part1](ex3_05_1.cpp)

[part2](ex3_05_2.cpp)

## ex3.06
> Use a range for to change all the characters in a string to X.

[code](ex3_06.cpp)

## ex3.07
> What would happen if you define the loop control variable in the previous
> exercise as type char? Predict the results and then change your program to
> use a char to see if you were right.

If we change `auto&` to `char`, then nothing happens, because variable didn't 
bound to string. If we change `auto` to `char`, then the result would be the same
as previous code.

[code](ex3_07.cpp)

## ex3.08
> Rewrite the program in the first exercise, first using a while and again using a 
> traditional for loop. Which of the three approaches do you prefer and why?

[part1](ex3_08_1.cpp)

[part2](ex3_08_2.cpp)

I prefer range `for`, because it is elegant and easy to understand.

## ex3.09
> What does the following program do? Is it valid? If not, why not?
```cpp
string s;
cout << s[0] << endl;
```

It is illegal, because s[0] is undefined.

## ex3.10
> Write a program that reads a string of characters including punctuation and writes
> what was read but with the punctuation removed.

[code](ex3_10.cpp)

## ex3.11
> Is the following range for legal? If so, what is the type of c?
```cpp
const string s = "Keep out!";
for(auto &c:s){/* ... */}
```

It is allowed to read the string, but not allowed to modify the string.

## ex3.12
> Which, if any, of the following vector definitions are in error? For those
> that are legal, explain what the definition does. For those that are not 
> legal, explain why they are illegal.
>
> (a) vector<vector<int>> ivec;
>
> (b) vector<string> svec = ivec;
>
> (c) vector<string> svec(10, "null");

(a) Some compilers may require the old style declaration, `vector<vector<int> > ivec;`;

(b) It is illegal, because ivec is `int`, but svec is `string`;

(c) It is legal, svec has 10 strings, each string is "null".

## ex3.13
> How many elements are there in each of the following vectors? What are the values 
> of the elements?
>
> (a) vector<int> v1; (b) vector<int> v2(10);
>
> (c) vector<int> v3(10, 42); (d) vector<int> v4{10};
>
> (e) vector<int> v5{10, 42}; (f) vector<string> v6{10};
>
> (g) vector<string> v7{10, "hi"};

(a) 0 element in this vector;

(b) 10 elements in this vector, each of them is 0;

(c) 10 elements in this vector, each of them is 42;

(d) 1 element in this vector, the value is 10;

(e) 2 elements in this vector, v5[0] = 10, v5[1] = 42;

(f) 10 elements in this vector, each of them is default-initialized elements;

(g) 10 elements in this vector, each of them is string "hi".

## ex3.14
> Write a program to read a sequence of ints from cin and store those values in a vector.

[code](ex3_14.cpp)

## ex3.15
> Repeat the previous program but read strings this time.

[code](ex3_15.cpp)

## ex3.16
> Write a program to print the size and contents of the vectors from exercise 3.13. Check
> whether your answers to that exercise were correct. If not, restudy until you understand
> why you were wrong.

[code](ex3_16.cpp)

## ex3.17
> Read a sequence of words from `cin` and store the values a `vector`. After you've read all
> the words, process the `vector` and change each word to uppercase. Print the transformed 
> elements, eight words to a line.

[code](ex3_17.cpp)

## ex3.18
> Is the following program legal? If not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```

It is illegal
```cpp
vector<int> ivec;
ivec.push_back(42);
```

## ex3.19
> List three ways to define a `vector` and give it ten elements, each with the value of 42.
> Indicate whether there is a prefered way to do so and why.

