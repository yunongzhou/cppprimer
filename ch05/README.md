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
