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
