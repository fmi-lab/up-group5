### 13.01.2015

---

#### Problem 0

A right position is the position of n chess pieces on a chess_board<sub>nxn</sub> where no other piece can beat the others. Write a recursive program that generates and outputs all right positions of n rooks.

###### Example
```c++
$ 2
*0
0*

0*
*0

$ 3
*00
0*0
00*

*00
00*
0*0

0*0
*00
00*

0*0
00*
*00

00*
*00
0*0

00*
0*0
*00
```

---

#### Problem 1

A maze is presented as a boolean square matrix A<sub>8x8</sub>. The cell<sub>i,j</sub> is considered passable if the element a<sub>ij</sub> is true, otherwise it's unpassable. Write a program that checks for the existence of a path starting from top left and ending bottom right of the maze.

---

#### Problem 2 

Write a program takes as input an expression of the following kind:

```
<expression> ::= <integer> | (<expression><sign><expression)
<sign> ::= + | - | *
```

For the sake of simplicity, let the input expression not contain spaces.

##### Example
```c++
$ 148
148

$ ((21-16)*4)
20
```

---

#### Problem 3 

Towers of Hanoi: http://hanoitower.mkolar.org/HThistory.html
Game: http://hanoitower.mkolar.org/Hanoi.html

Write a program that transfers k disks from one peg to another using a helper peg.

---
