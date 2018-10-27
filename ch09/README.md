## ex9.01
> Which is the most appropriate—a vector, a deque, or a list—for the following 
> program tasks? Explain the rationale for your choice. If there is no reason to
> prefer one or another container, explain why not.
>
> (a) Read a fixed number of words, inserting them in the container 
> alphabetically as they are entered. We’ll see in the next chapter that 
> associative containers are better suited to this problem.
>
> (b) Read an unknown number of words. Always insert new words at the back. 
> Remove the next value from the front.
>
> (c) Read an unknown number of integers from a file. Sort the numbers and then
> print them to standard output.

(a) list

(b) beque

(c) vector

## ex9.02
> Define a list that holds elements that are deques that hold ints.
```cpp
std::list<std::deque<int> > test;
```

## ex9.03
> What are the constraints on the iterators that form iterator ranges?

two iterators, begin and end, form an iterator range, if

* They refer to elements of, or one past the end of, the same container, and

* It is possible to reach end by repeatedly incrementing begin. In other words, 
end must not precede begin.

## ex9.04
> Write a function that takes a pair of iterators to a vector<int> and an int 
> value. Look for that value in the range and return a bool indicating whether 
> it was found.
```cpp
bool func(vector<int>::iterator beg, vector<int>::iterator end, int value){
  for(auto iter = beg, iter != end; ++iter){
    if( *iter == value) return true;
  }
  return false;
}
```

## ex9.05
> Rewrite the previous program to return an iterator to the requested element. 
> Note that the program must handle the case where the element is not found.
```cpp
vector<int>::iterator func(vector<int>::iterator beg, vector<int>::iterator end,
int value){
  for(auto iter = beg; iter != end; ++iter){
    if(*iter == value) return iter;
  }
  return end;
}
```

## ex9.06
> What is wrong with the following program? How might you correct it?
```cpp
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end(); 
while (iter1 < iter2) /* ... */
```
`iter1 < iter2` is always true, in this case, we should fix it as follows,
```cpp
while(iter1 != iter2)
```

## ex9.07
> What type should be used as the index into a vector of ints?
```cpp
vector<int>::size_type
```

## ex9.08
> What type should be used to read elements in a list of strings? To write them?
```cpp
list<string>::iterator
list<string>::const_iterator

list<string>::iterator // write
```

## ex9.09
> What is the difference between the begin and cbegin functions?

begin is nonconst and returns the container's iterator type, cbegin is const and
returns the container's const_iterator type.

## ex9.10
> What are the types of the following four objects?
```cpp
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin(); 
auto it3 = v1.cbegin(), it4 = v2.cbegin();
```
```cpp
vector<int> v1;
const vector<int> v2;
// it1 type: vector<int>::iterator;
// it2 type: const vector<int>::iterator;
auto it1 = v1.begin(), it2 = v2.begin();
// it3 type: vector<int>::const_iterator;
// it4 type: const vector<int>::const_iterator;
auto it3 = v1.cbegin(), it4 = v2.cbegin();
```

## ex9.11
> Show an example of each of the six ways to create and initialize a vector. 
> Explain what values each vector contains.
```cpp
vector<int> testVec1; // this vector is empty
vector<int> testVec2 = {1, 2}; // testVec2[0] = 1, testVec2[1] = 2;
vector<int> testVec3(testVec2); // testVec3[0] = 1, testVec3[1] = 2;
vector<int> testVec4{1, 2}; // testVec4[0] = 1, testVec4[1] = 2;
vector<int> testVec5 = testVec4; // testVec5[0] = 1, testVec5[1] = 2;
vector<int> testVec6(2, 1); // testVec6[0] = 1, testVec6[1] = 1;
```

## ex9.12
> Explain the differences between the constructor that takes a container to copy
> and the constructor that takes two iterators.

The constructor that takes a container to copy assumes that the container and 
element type are identical;

The constructor that takes two iterators, there is no requirement that the 
container types be identical.

## ex9.13
> How would you initialize a vector<double> from a list<int>? From a 
> vector<int>? Write code to check your answers.

[code](ex9_13.cpp)

## ex9.14
> Write a program to assign the elements from a list of char* pointers to 
> C-style character strings to a vector of strings.

[code](ex9_14.cpp)

## ex9.15
> Write a program to determine whether two vector<int>s are equal.

[code](ex9_15.cpp)

## ex9.16
> Repeat the previous program, but compare elements in a list<int> to a 
> vector<int>.

[code](ex9_16.cpp)

## ex9.17
> Assuming c1 and c2 are containers, what (if any) constraints does the 
> following usage place on the types of c1 and c2?
```cpp
if(c1 < c2)
```

* The element type should support the required operator;

* The types of c1 and c2 should be identical and the element type should be 
identical.
