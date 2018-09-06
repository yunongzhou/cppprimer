## ex4.01
> What is the value returned by 5+10*20/2?

105

## ex4.02
> Using Table 4.12(p.166), parenthesize the following expressions to indicate
> the order in which the operands are grouped:
>
> (a) *vec.begin()
>
> (b) *vec.begin() + 1

(a) `*(vec.begin())`

(b) `(*(vec.begin())) + 1`

## ex4.03
> Order of evaluation for most of the binary operators is left undefined to give 
> the compiler opportunities for optimization. This strategy presents a trade-off
> between efficient code generation and potential pitfalls in the use of the 
> language by the programmer. Do you consider that an acceptable trade-off? Why 
> or why not?

Yes, I think it is an acceptable trade-off, because for experienced programmer, 
this is a way to improve the performance of program, however, for beginner, it 
is much better to not touch the undefined behavior.

## ex4.04
> Parenthesize the following expression to show how it is evaluated. Test your 
> answer by compiling the expression (without parentheses) and printing its 
> result.
>
> 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2

((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)

16 + 75 + 0 = 91

## ex4.05
> Determine the result of the following expressions.
>
> (a) -30 * 3 + 21 / 5
> 
> (b) -30 + 3 * 21 / 5
>
> (c) 30 / 3 * 21 % 5
>
> (d) -30 / 3 * 21 % 4

(a) -90 + 4 = -86

(b) -30 + 12 = -18

(c) 10 * 21 % 5 = 0

(d) -210 % 4 = -2

## ex4.06
> Write an expression to determine whether an `int` value is even or odd.

(i % 2 == 0) ? "even" : "odd";

## ex4.07
> What does overflow mean? Show three expressions that will overflow.

Overflow happens when a value is computed that is outside the range of values 
that the type can represent. For example,

```cpp
unsigned a = 0;
a -= 1;

short b = 32767;
b += 1;

int c = pow(2,31) - 1;
c += 1;
```

## ex4.08

