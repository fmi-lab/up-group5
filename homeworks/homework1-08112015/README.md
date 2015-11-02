### Deadline: 08.11.2015

Upload link: https://my.pcloud.com/#page=puplink&code=ev5Zxd5usCymRP4Qgu3gR98Tlz3jIO9y

---

#### Problem 0
##### Points: 1

Write a program that finds in ascending order all three-digit integers that don't contain equal digits. Don't use % or /.

---

#### Problem 1
##### Points: 1

Write a program that prints the following table:

```c++
A
B C
C D E
D E F G
E F G H I
```

---

#### Problem 2
##### Points: 2

Write a program that prints all three-digit integers, where `a`,`b` and `c` are the three digits, which satisfy `a + c = b`.

---

#### Problem 3
##### Points: 3

Write a program that prints all numbers in the range `[m,n]` which if the k-th right-to-left digit of a number is removed, the number gets smaller an integer times. (If the second digit of 105 is removed it becomes 15, thus 7 times smaller than 105 and 7 is a whole number, so 105 is printed)

##### Examples
```c++
$ 100 150 2
100 105 108 110 120 121 130 132 135 140 143 150

$ 12345 54321 3
13000 14000 15000 16000 17000 18000 19000 20000 21000 22000
23000 24000 25000 26000 27000 28000 29000 30000 31000 32000
33000 34000 35000 36000 37000 38000 39000 40000 41000 42000
43000 44000 45000 46000 47000 48000 49000 50000 51000 52000
53000 54000

$ 434 545 2
440 451 462 473 480 484 495 500

```

---

#### Problem 4
##### Points: 3

Write a program that checks if the Fibonacci numbers with sequential numbers in the range [1, 40] have the following property: a Fibonacci number is even if and only if its sequential number mod 3 equals 0.

---

#### Problem 5 [BONUS]
##### Points: 5

Write a program that takes the integers `m`, `n`, `p` and `q` and finds all sequences of operations `(op1, op2, op3)` a subset of `+`, `-`, `*` and `/` so that when they are substituted in the expression `(((m op1 n) op2 p) op3 q)` the result is equal to a given number `a`.

**Hint:** Use `enum` http://en.cppreference.com/w/cpp/language/enum


