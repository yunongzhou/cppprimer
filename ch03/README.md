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

[code](ex3_19.cpp)

I prefer the second way because it is elegant.

## ex3.20
> Read a set of integers into a `vector`. Print the sum of each pair of adjacent elements. 
> Change your program so that it prints the sum of the first and last elements, followed
> by the sum of the second and second-to-last, and so on.

[part1](ex3_20_1.cpp)

[part2](ex3_20_2.cpp)

## ex3.21
> Redo the first exercise from 3.3.3(p.105) using iterators.

[code](ex3_21.cpp)

## ex3.22
> Revise the loop that printed the first paragraph in text to instead change the elements in 
> text that correspond to the first paragraph to all uppercase. After you've updated text, 
> print its contents.

[code](ex3_22.cpp)

## ex3.23
> Write a program to create a `vector` with ten `int`elements. Using an iterator, assign each
> element a value that is twice its current value. Test your program by printing the vector.

[code](ex3_23.cpp)

## ex3.24
> Redo the last exercise from 3.3.3(p.105) using iterators.

[part1](ex3_24_1.cpp)

[part2](ex3_24_2.cpp)

## ex3.25
> Rewrite the grade clustering program from 3.3.3(p.104) using iterators instead of subscripts.

[code](ex3_25.cpp)

## ex3.26
> In the binary search program on page 112, why did we write `mid = beg + (end - beg)/2;`, 
> instead of `mid = (beg + end) / 2;`?

Because iterator doesn't define the `+` operator between two vectors.

## ex3.27
> Assuming `txt_size` is a function that takes no arguments and returns an `int` value, which
> of the following definitions are illegal? Explain why.
> unsigned buf_size = 1024;
> (a) int ia[buf_size];     (b) int ia[4*7-14];
> (c) int ia[txt_size()];   (d) char st[11] = "fundamental";

(a) it is illegal, because buf_size is not `const`;

(b) it is legal;

(c) it is illegal, because txt_size() returns `int`, not `const int`;

(d) it is illegal, because string literal ends with a null character.

## ex3.28
> What are the values in the following arrays?
```cpp
string sa[10];
int ia[10];
int main(){
  string sa2[10];
  int ia2[10];
} // main
```

Variables defined outside any function body are initialized to zero, hence, the values of ia 
are 0, the values of ia2 are undefined. The values of sa and sa2 are empty, because string is 
not build-in type.

## ex3.29
> List some drawbacks of using an array instead of a vector.

1. The dimension of array must be known at compile time;
2. The dimension of array is fixed, therefore, you cannot add element to an array;

## ex3.30
> Identify the indexing errors in the following code:

```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for(size_t ix = 1; ix <= array_size; ++ix)
  ia[ix] = ix;
```

ix should starts from 0.

## ex3.31
> Write a program to define an array of ten ints. Given each element the same value as its 
> postion in the array.

[code](ex3_31.cpp)

## ex3.32
> Copy the array you defined in the previous exercise into another array. Rewrite your program
> to use `vector`.

[part1](ex3_32_1.cpp)

[part2](ex3_32_2.cpp)

## ex3.33
> What would happen if we did not initialize the scores array in the program on page 116?

The array is undefined because the definition is in function.

## ex3.34
> Given that p1 and p2 point to elements in the same array, what does the following code do?
> Are there values of p1 or p2 that make this code illegal?
```cpp
p1 += p2 - p1;
```

the same as `p1 = p2;`

## ex3.35
> Using pointers, write a program to set the elements in an array to zero.

[code](ex3_35.cpp)

## ex3.36
> Write a program to compare two arrays for equality. Write a similar program to compare two 
> vectors.

[part1](ex3_36_1.cpp)

[part2](ex3_36_2.cpp)

## ex3.37
> What does the following program do?

```cpp
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while(*cp){
  cout << *cp << endl;
  ++cp;
}
```

output all the elements of array ca.

## ex3.38
> In this section, we noted that it was not only illegal but meaningless to try to add two 
> pointers. Why would adding two pointers be meaningless?

There is no explanation for adding two pointers in C++.

## ex3.39
> Write a program to compare two strings. Now write a program to compare the values of two
> C-style character strings.

[part1](ex3_39_1.cpp)

[part2](ex3_39_2.cpp)

## ex3.40
> Write a program to define two character arrays initialized from string literals. Now define a 
> third character array to hold the concatenation of the two arrays. Use `strcpy` and `strcat` to 
> copy the two arrays into the third.

[code](ex3_40.cpp)

## ex3.41
> Write a program to initialize a `vector` from an array of `int`.

[code](ex3_41.cpp)

## ex3.42
> Write a program to copy a `vector` of `ints` into an array of `ints`.

[code](ex3_42.cpp)

## ex3.43
> Write three different versions of a program to print the elements of ia. One version should use
> a range for to manage the iteration, the other two should use an ordinary for loop in one case
> using subscripts and in the other using pointers. In all three programs write all the types 
> directly. That is, do not use a type alias, auto, or decltype to simplify the code.

[code](ex3_43.cpp)

## ex3.44
> Rewrite the programs from the previous exercises using a type alias for the type of the loop
> control variables.

[code](ex3_44.cpp)

## ex3.45
> Rewrite the programs again, this time using auto.

[code](ex3_45.cpp)
