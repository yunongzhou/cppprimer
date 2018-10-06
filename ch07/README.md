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

## ex7.20
> When are friends useful? Discuss the pros and cons of using friends.

A class can allow another class or function to access its nonpublic members by 
making that class or function a friend.

## ex7.21
> Update your Sales_data class to hide its implementation. The programs you’ve 
> written to use Sales_data operations should still continue to work. Recompile 
> those programs with your new class definition to verify that they still work.

[code](ex7_21.h)

## ex7.22
> Update your Person class to hide its implementation.

[code](ex7_22.h)

## ex7.23
> Write your own version of the Screen class.

[code](ex7_23.h)

## ex7.24
> Give your Screen class three constructors: a default constructor; a 
> constructor that takes values for height and width and initializes the 
> contents to hold the given number of blanks; and a constructor that takes 
> values for height, width, and a character to use as the contents of the 
> screen.

[code](ex7_24.h)

## ex7.25
> Can Screen safely rely on the default versions of copy and assignment? If so, 
> why? If not, why not?

No, only built-in type can rely on the default versions of copy and assignment.
(refer Section 7.1.5)

## ex7.26
> Define Sales_data::avg_price as an inline function.

[header file](ex7_26.h)
[function file](ex7_26.cpp)

## ex7.27
> Add the move, set, and display operations to your version of Screen. Test your
> class by executing the following code:
```cpp
Screen myScreen(5, 5, 'X'); 
myScreen.move(4,0).set('#').display(cout); 
cout << "\n";
myScreen.display(cout);
cout << "\n";
```

[code](ex7_27.h)

## ex7.28
> What would happen in the previous exercise if the return type of move, set, 
> and display was Screen rather than Screen&?

If the return type was Screen, which means that they return the copy of the
object, hence, when we change myScreen, we change the copy of myScreen, not 
the myScreen itself.

## ex7.29
> Revise your Screen class so that move, set, and display functions return 
> Screen and check your prediction from the previous exercise.

[code](ex7_29.h)

## ex7.30
> It is legal but redundant to refer to members through the this pointer. 
> Discuss the pros and cons of explicitly using the this pointer to access 
> members.

Pros:
* You can modify the object directly;

Cons:
* Sometimes it cost a lot of cpu time;

## ex7.31
> Define a pair of classes X and Y, in which X has a pointer to Y, and Y has an 
> object of type X.

[code](ex7_31.h)

## ex7.32
> Define your own versions of Screen and Window_mgr in which clear is a member 
> of Window_mgr and a friend of Screen.

[code](ex7_32.h)
