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
>
> (a) while(string::iterator iter != s.end()){/* ... */}
>
> (b) while(bool status = find(word)) {/* ... */}
>
>     if(!status){/* ... */}

(a) Because iter isn't initialized, 
