## ex5.01
> What is null statement? When might you use a null statement?

Null statement is a single semicolon. A null statement is useful where the language requires
a statement but the program's logic does not.

## ex5.02
> What is a block? When might you use a block?
A block is a sequence of statements and declarations surrounded by a pair of curly braces, a 
block is a scope. Blocks are used when the language requires a single statement but the logic
of our program needs more than one.

## ex5.03
> Use the comma operator to rewrite the while loop from 1.4.1(p.11) so that it no longer 
> requires a block. Explain whether this rewrite improves or diminishes the readability
> of this code.

[code](ex5_03.cpp)

This rewrite diminishes the readability of this code.

## ex5.04
> Explain each of the following examples, and correct any problem you detect.
```cpp
 (a) while(string::iterator iter != s.end()){/* ... */}

 (b) while(bool status = find(word)) {/* ... */}

     if(!status){/* ... */}
```
(a) Because iter isn't initialized, hence this loop is invalid.

```cpp
std::string iterator iter = s.begin();
while(iter != s.end()){/* ... */}
```

(b) Because if statement is not in the while loop, therefore, status in if statement is 
not defined.
```cpp
bool status;
while(status = find(word)){/* ... */}
if(!status){/* ... */}
```

## ex5.05
> Using an if-else statement, write your own version of the program to generate the letter
> grade from the numeric grade.

[code](ex5_05.cpp)

## ex5.06
> Rewrite your grading program to use the conditional operator in place of the if-else statement.

[code](ex5_06.cpp)

## ex5.07
> Correct the errors in each of the following code fragments:
```cpp
 (a) if (ival1 != ival2) ival1 = ival2

     else ival1 = ival2 = 0;

 (b) if(ival < minval) minval = ival;

     occurs = 1;

 (c) if(int ival = get_value()) cout << "ival = " << ival << endl;

     if(!ival) cout << "ival = 0\n";

 (d) if(ival = 0) ival = get_value();
```

```cpp
(a) if(ival1 != ival2) ival1 = ival2; // lost semicolon
    else ival1 = ival2 = 0;

(b) if(ival1 < minval){
      minval = ival;
      occurs = 1;
    } // curly braces lost

(c) int ival = 0; // declare ival outside the if statement
    if(ival = get_value()) cout << "ival = " << ival << endl;

(d) if(ival == 0) ival = get_value();
```

## ex5.08
> What is a "dangling else"? How are else clauses resolved in C++?

When we nest an if inside another if, it is possible that there will be more if branches 
than else branches. Sometimes it is confused to find out which if a given else belongs to.
This problem, usually referred to as a dangling else.

In C++ the ambiguity is resolved by specifying that each else is matched with the closest
preceding unmatched if.

## ex5.09
> Write a program using a series of if statements to count the number of vowels in 
> text read from cin.

[code](ex5_09.cpp)

## ex5.10
> There is one problem with our vowel-counting program as we've implemented it: It 
> doesn't count capital letters as vowels. Write a program that counts both lower-
> and upper letters as the appropriate vowel--that is, your program should count both
> 'a' and 'A' as part of aCnt, and so forth.

[code](ex5_10.cpp)

## ex5.11
> Modify our vowel-counting program so that it also counts the number of blank spaces,
> tabs, and newlines read.

[code](ex5_11.cpp)

## ex5.12
> Modify our vowel-counting program so that it counts the number of occurences of the 
> following two-character sequences: ff, fl and fi.

[code](ex5_12.cpp)

## ex5.13
> Each of the programs in the highlighted text on page 184 contains a common programming
> error. Identify and correct each error.
```cpp
(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch(ch){
      case 'a':aCnt++;
      case 'e':eCnt++;
      default: iouCnt++;
    }

(b) unsigned index = some_value();
    switch(index){
      case 1:
        int ix = get_value();
        ivec[ ix ] = index;
        break;
      default:
        ix = ivec.size() - 1;
        ivec[ ix ] = index;
    }

(c) unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch(digit){
      case 1, 3, 5, 7, 9:
        oddCnt++;
        break;
      case 2, 4, 6, 8, 10;
        evenCnt++;
        break;
    }

(d) unsigned ival = 512, jval = 1024, kval = 4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt){
      case ival:
        bufsize = ival * sizeof(int);
        break;
      case jval:
        bufsize = jval * sizeof(int);
        break;
      case kval:
        bufsize = kval * sizeof(int);
        break;
    }
```

```cpp
(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch(ch){
      case 'a':aCnt++; // break missing
      case 'e':eCnt++;
      default: iouCnt++;
    }

(b) unsigned index = some_value();
    switch(index){
      case 1:
        int ix = get_value(); // control bypasses an explicitly initialized variable
        ivec[ ix ] = index;
        break;
      default:
        ix = ivec.size() - 1;
        ivec[ ix ] = index;
    }

(c) unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch(digit){
      case 1, 3, 5, 7, 9: // case label error
        oddCnt++;
        break;
      case 2, 4, 6, 8, 10;
        evenCnt++;
        break;
    }

(d) unsigned ival = 512, jval = 1024, kval = 4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt){
      case ival: // case label must be constant expression
        bufsize = ival * sizeof(int);
        break;
      case jval:
        bufsize = jval * sizeof(int);
        break;
      case kval:
        bufsize = kval * sizeof(int);
        break;
    }
```

## ex5.14
> Write a program to read strings from standard input looking for duplicated words. The
> program should find places in the input where one word is followed immediately by itself.
> Keep track of the largest number of times a single repetition occurs and which word is 
> repeated. Print the maximum number of duplicates, or else print a message saying that no
> word was repeated. For example, if the input is 
>
> how now now now brown cow cow
>
> the output should indicate that the word now occured three times.

[code](ex5_14.cpp)

## ex5.15
> Explain each of the following loops. Correct any problem you detect.
```cpp
(a) for(int ix = 0; ix != sz; ++ix){/* ... */}
    if(ix != sz) //...

(b) int ix;
    for(ix != sz; ++ix){/* ... */}

(c) for(int ix = 0; ix != sz; ++ix, ++sz){/* ... */}
```
