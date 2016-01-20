### 20.01.2016 

Upload link: https://my.pcloud.com/#page=puplink&code=OhFZUXYad17gFW4CeOBOXH9jcpjaK8j7

---

#### Problem 0
##### Points: 3

Write a program that finds and outputs all `n` dimensional vectors with components `0` and `1` (1 <= n <= 20).

###### Examples

```c++
$ n = 2
(0, 0) 
(0, 1) 
(1, 0) 
(1, 1) 

$ n = 3
(0, 0, 0) 
(0, 0, 1) 
(0, 1, 0) 
(0, 1, 1) 
(1, 0, 0) 
(1, 0, 1) 
(1, 1, 0) 
(1, 1, 1)

# n = 4
(0, 0, 0, 0) 
(0, 0, 0, 1) 
(0, 0, 1, 0) 
(0, 0, 1, 1) 
(0, 1, 0, 0) 
(0, 1, 0, 1) 
(0, 1, 1, 0) 
(0, 1, 1, 1) 
(1, 0, 0, 0) 
(1, 0, 0, 1) 
(1, 0, 1, 0) 
(1, 0, 1, 1) 
(1, 1, 0, 0) 
(1, 1, 0, 1) 
(1, 1, 1, 0) 
(1, 1, 1, 1) 
```

---

#### Problem 1
##### Points: 3

Define a recursive function that finds the value of the Ackerman function `Ack(m,n)` that has the following recursive definition for non-negative values of `m` and `n`:

Ack(0,n) = n + 1

Ack(m,0) = Ack(m-1,1), m > 0

Ack(m,n) = Ack(m-1,Ack(m,n-1)), m > 0, n > 0

###### Examples
```c++
$ m, n = 0 4
5

$ m, n = 3 3
61
```
---

#### Problem 2
##### Points: 4

Write a program which sorts descendingly an array of strings(array of characters with maximum size 1000) using the Merge sort or the Quicksort algorithm.

Hint 1: You need to determine how will you compare the strings -> lexicographically
Hint 2: We have written a Quicksort and Merge sort before

##### Examples
```c++

$ n = 10 -> "dimo", "martin", "ivan", "teodora", "mariya", "stiliyan", "snezhana", "georgi", "vasil", "radoslav"
"vasil", "teodora", "stiliyan", "snezhana", "radoslav", "martin", "mariya", "ivan", "georgi", "dimo"


$ n = 5 -> "bbc", "abc", "abcc", "ddc", "bbcea"
"ddc", "bbcea", "bbc", "abcc", "abc"
```

---

#### Problem 3
##### Points: 5

Write a program takes as input a boolean expression (without mistakes and spaces) of the following kind:

```
<boolean_expression> ::= t | f | <operation>(<operands>)
<operation> ::= n | a | o
<operands> ::= <operand> | <operand>,<operands>
<operand> ::= <boolean_expression>
```

where `t` and `f` mean `true` and `false, `n` is unary operator (takes only one argument) and means `negation`, `a` and `o` take a non fixed number of operands and meand `and (&&)` and `or (||)`. The program should find and return the value of the boolean expression.

###### Examples

```c++
$ t
1

$ n(t)
0

$ o(n(t),f,n(f))
1

$ a(o(n(t),f,n(f)),t)
1

$ n(a(o(n(t),f,n(f)),t))
0
```

---

#### Problem 4 [BONUS]
##### Points: 5

Define a function that, for a given single argument function `f` that returns integer and integer range [a, b] with values from the domain of `f`, returns the max value of `f` in [a, b].

Reference: [Simple Higher Order Functions in C++](https://dun.gs/2015/04/17/simple-higher-order-functions.html), search for **Function Pointers**

---

#### Problem 5 [BONUS]
##### Points: 5

Write a program that finds the shortest way starting from top left and ending bottom right of the maze in case a path is present.

```c++
bool maze[8][8]= { 
    1, 0, 1, 1, 1, 1, 1, 1,
    1, 0, 1, 0, 0, 0, 0, 1,
    1, 1, 1, 0, 1, 1, 0, 1,
    0, 0, 0, 1, 1, 1, 0, 1,
    1, 1, 1, 1, 1, 1, 0, 1,
    1, 1, 1, 1, 1, 0, 0, 1,
    1, 1, 1, 1, 1, 0, 1, 1,
    1, 1, 1, 1, 1, 0, 1, 1 
};
```

##### Examples

```c++
Shortest path is: (0,0)->(1,0)->(2,0)->(2,1)->(2,2)->(1,2)->(0,2)->(0,3)->(0,4)->(0,5)->(0,6)->(0,7)->(1,7)->(2,7)->(3,7)->(4,7)->(5,7)->(6,7)->(7,7)
```

---
