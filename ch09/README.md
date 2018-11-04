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

## ex9.18
> Write a program to read a sequence of strings from the standard input into a 
> deque. Use iterators to write a loop to print the elements in the deque. 

[code](ex9_18.cpp)

## ex9.19
> Rewrite the program from the previous exercise to use a list. List the changes
> you needed to make.

[code](ex9_19.cpp)

## ex9.20
> Write a program to copy elements from a list<int> into two deques. The 
> even-valued elements should go into one deque and the odd ones into the other.

[code](ex9_20.cpp)

## ex9.21
> Explain how the loop from page 345 that used the return from insert to add 
> elements to a list would work if we inserted into a vector instead.

The explanation is exactly the same as list<int>.

## ex9.22
> Assuming iv is a vector of ints, what is wrong with the following program? How
> might you correct the problem(s)?
```cpp
vector<int>::iterator iter = iv.begin(),
mid = iv.begin() + iv.size()/2;
while (iter != mid)
  if (*iter == some_val)
    iv.insert(iter, 2 * some_val);
```
It is dead loop, the fixed version is listed below.
```cpp
vector<int>::iterator iter = iv.begin(),
mid = iv.begin() + iv.size()/2;
while (iter != mid){
  if (*iter == some_val){
    iv.insert(iter, 2 * some_val);
    iter++;
  }
}
```

## ex9.23
> In the first program in this section on page 346, what would the values of 
> val, val2, val3, and val4 be if c.size() is 1?

val = *c.begin();

val2 = c.front() = *c.begin() = val;

~~val3 = *(--last) = undefined;~~ val3 = *(--last) = val;

val4 = c.back() = *c.begin() = val;

## ex9.24
> Write a program that fetches the first element in a vector using at, the 
> subscript operator, front, and begin. Test your program on an empty vector.

[code](ex9_24.cpp)

## ex9.25
> In the program on page 349 that erased a range of elements, what happens if 
> elem1 and elem2 are equal? What if elem2 or both elem1 and elem2 are the 
> off-the-end iterator?

~~If elem1 and elem2 are equal, it will erase only one element which is equals 
to elem1;~~  nothing would happen;

if elem2 is the off-the-end iterator, it will erase from elem1 to the end;

if elem1 and elem2 are off-the-end iterator, nothing would happen.

## ex9.26
> Using the following definition of ia, copy ia into a vector and into a list. 
> Use the single-iterator form of erase to remove the elements with odd values 
> from your list and the even values from your vector.
```cpp
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
```
[code](ex9_26.cpp)

## ex9.27
> Write a program to find and remove the odd-valued elements in a 
> forward_list<int>.

[code](ex9_27.cpp)

## ex9.28
> Write a function that takes a forward_list<string> and two additional string 
> arguments. The function should find the first string and insert the second 
> immediately following the first. If the first string is not found, then insert
> the second string at the end of the list.

[code](ex9_28.cpp)

## ex9.29
> Given that vec holds 25 elements, what does vec.resize(100) do? What if we 
> next wrote vec.resize(10)?

vec.resize(100) will add 75 elements of value 0 to the back of vec;
vec.resize(10) will delete 90 elements from the back of vec.

## ex9.30
> What, if any, restrictions does using the version of resize that takes a 
> single argument place on the element type?

If the container holds elements of a class type and resize adds elements, we
must supply an initializer or the element type must have a default constructor.

## ex9.31
> The program on page 354 to remove even-valued elements and duplicate odd ones 
> will not work on a list or forward_list. Why? Revise the program so that it 
> works on these types as well. 

Because forward_list cannot use erase function.

[list](ex9_31_1.cpp)

[forward_list](ex9_31_2.cpp)

## ex9.32
> In the program onpage 354 would it be legal to write the call to insert as 
> follows? If not, why not?
```cpp
iter = vi.insert(iter, *iter++);
```
~~It is legal.~~ 
The statement is illegal, after entering function insert, iter could be its
original value or original value + 1 or even anything else, depending on how
compiler implemented.

## ex9.33
> In the final example in this section what would happen if we did not assign 
> the result of insert to begin? Write a program that omits this assignment to 
> see if your expectation was correct.

segmentation fault: 11. After insert, the iterator is invalid.

[code](ex9_33.cpp)

## ex9.34
> Assuming vi is a container of ints that includes even and odd values, predict 
> the behavior of the following loop. After you’ve analyzed this loop, write a 
> program to test whether your expectations were correct.
```cpp
iter = vi.begin();
while (iter != vi.end())
  if (*iter % 2)
    iter = vi.insert(iter, *iter);
  ++iter;
```
The program will lead to dead loop.
[code](ex9_34.cpp)

## ex9.35
> Explain the difference between a vector’s capacity and its size.

The size of a container is the number of elements it already hods; its capacity 
is how many elements it can hold before more space must be allocated.

## ex9.36
> Can a container have a capacity less than its size?
No.

## ex9.37
> Why don’t list or array have a capacity member?

array has fixed size, and list doesn't store continuously, therefore, they don't
have a capacity member.

## ex9.38
> Write a program to explore how vectors grow in the library you use.

[code](ex9_38.cpp)

## ex9.39
> Explain what the following program fragment does:
```cpp
vector<string> svec; 
svec.reserve(1024); 
string word;
while (cin >> word)
  svec.push_back(word);
svec.resize(svec.size()+svec.size()/2);
```
This program declares a vector of string with name svec, after that, svec
allocates space for 1024 elements. Then declare a string with name word,
input word from screen, and create an element with value word at the end
of svec. Finally, resize svec to have 1024+512 elements.

## ex9.40
> If the program in the previous exercise reads 256 words, what is its likely 
> capacity after it is resized? What if it reads 512? 1,000? 1,048?

If reads 256 words, the size is 384, the capacity is 1024,

if reads 512 words, the size is 768, the capacity is 1024,

if reads 1000 words, the size is 1500, the capacity is 2048,

if reads 1048 words, the size is 1572, the capacity is 2048.

## ex9.41
> Write a program that initializes a string from a vector<char>.

[code](ex9_41.cpp)

## ex9.42
> Given that you want to read a character at a time into a string, and you know 
> that you need to read at least 100 characters, how might you improve the 
> performance of your program?

Use member reserve(120) to allocate enough space for this string.(@Mooophy)

## ex9.43
> Write a function that takes three strings, s, oldVal, and newVal. Using 
> iterators, and the insert and erase functions replace all instances of oldVal 
> that appear in s by newVal. Test your function by using it to replace common 
> abbreviations, such as “tho” by “though” and “thru” by “through”.

[code](ex9_43.cpp)(@pezy)
