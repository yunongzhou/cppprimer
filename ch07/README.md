## ex7.01
> Write a version of the transaction-processing program from § 1.6 (p. 24) using
> the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).

[code](ex7_01.cpp)

## ex7.02
> Add the combine and isbn members to the Sales_data class you wrote for the 
> exercises in § 2.6.2 (p. 76).

[code](ex7_02.h)

## ex7.03
> Revise your transaction-processing program from § 7.1.1 (p. 256) to use these 
> members.

[code](ex7_03.cpp)

## ex7.04
> Write a class named Person that represents the name and address of a person. 
> Use a string to hold each of these elements. Subsequent exercises will 
> incrementally add features to this class.

[code](ex7_04.h)

## ex7.05
> Provide operations in your Person class to return the name and address. 
> Should these functions be const? Explain your choice.

[code](ex7_05.h)

## ex7.06
> Define your own versions of the add, read, and print functions.

[code](ex7_06.h)

## ex7.07
> Rewrite the transaction-processing program you wrote for the exercises 
> in § 7.1.2 (p. 260) to use these new functions.

[code](ex7_07.cpp)

## ex7.08
> Why does read define its Sales_data parameter as a plain reference and print 
> define its parameter as a reference to const?

Because the value of revenue will be changed when dealing with read;

When dealing with print, nothing will be changed, hence we'd like to use
const.

## ex7.09
> Add operations to read and print Person objects to the code you wrote for the 
> exercises in § 7.1.2 (p. 260).

[code](ex7_09.h)

## ex7.10
> What does the condition in the following if statement do?
```cpp
if (read(read(cin, data1), data2))
```

read data1 and data2 at the same time.

## ex7.11
> Add constructors to your Sales_data class and write a program to use each of 
> the constructors.

[code](ex7_11.h)

## ex7.12
> Move the definition of the Sales_data constructor that takes an istream into 
> the body of the Sales_data class.

[code](ex7_12.h)

## ex7.13
> Rewrite the program from page 255 to use the istream constructor.

[code](ex7_13.cpp)

## ex7.14
> Write a version of the default constructor that explicitly initializes the 
> members to the values we have provided as in-class initializers.

```cpp
Sales_data():units_sold(0), revenue(0){}
```

## ex7.15
> Add appropriate constructors to your Person class.

[code](ex7_15.h)

## ex7.16
> What, if any, are the constraints on where and how often an access specifier 
> may appear inside a class definition? What kinds of members should be defined 
> after a public specifier? What kinds should be private?

There is no constraints on how often an access specifier may appear.

The members which are accessible to all parts of the program should be defined 
after a public specifier;

The members which are accessible to the member functions of the class but are 
not accessible to code that uses the class should be defined after a private
specifier.

## ex7.17
> What, if any, are the differences between using class or struct?

The only difference between struct and class is the default access level.

## ex7.18
> What is encapsulation? Why is it useful?

Separation of implementation from interface; encapsulation hides the 
implementation details of a type. In C++, encapsulation is enforced by
putting the implementation in the private part of a class.

It is useful because:
  * User code cannot inadvertently corrupt the state of an encapsulated object;
  * The implementation of an encapsulated class can change over time without 
requiring changes in user-level code.

## ex7.19
> Indicate which members of your Person class you would declare as public and 
> which you would declare as private. Explain your choice.

constructors and member functions would be public;

The name and address would be private.
