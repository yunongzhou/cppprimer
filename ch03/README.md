## ex3.02
> Write a program to read the standard input a line at a time. Modify your program
> to read a word a time.

-[part1](ch03/ex3_02_1.cpp)
-[part2](ch03/ex3_02_2.cpp)

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

