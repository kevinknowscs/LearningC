More Math Operations
====================

In Lessons 3 and 4 we looked at how to add and increment numbers.

There are, of course, many other mathematical operations the C provides that we have not
yet covered. Let's go through the rest of the basic math operations in this lesson.

There's an intuitiveness and symmetry to the mathematic operators. Once you learn one,
you should be able to infer what the others are. I'll give a list of operators at the end.

But before I show the list of operators, I want to clarify one point that may not have been
obvious from Lessons 3 and 4.

Unary vs. Binary Operators
==========================

Operators come in two main flavors: unary and binary.

A unary operator is an operator that operates on one value. For example, the increment
operator, "++" is a unary operator because it performs it's function on one value. For
example, if I say

```
x++;
```

The ++ operator is performing it's function again the variable x. The "thing" that an operator
performs its function against is called an "operand". So a unary operator operates on one
operand.

A binary operator operators on two operands. The "+" and "+=" operators are binary operators.
For example, in the expression:

```
... x + y;
```

The "+" operator is performing its function against two operands, x and y.

Be careful not to confuse the usage of "binary" in this context with how the word "binary"
is used in other contexts. For example, if I talk about "binary numbers", that's using the
word binary in a different context. Here when I use the word binary to refer to a binary operator
I'm talking about the fact that it operates on two things, or operands.

Binary operators are so common that we usually don't even bother to refer to them as "binary"
operators. There are fewer unary operators, so if we want to specifically stress that the operator
operates on only one operand, then we say its a unary operator.

Mostly I'm just pointing this out because I'm going to show a table of available operators, and I
just wanted to make it clear that most operators operate on two operands, but a few operators only
operate on one operand.

List of Mathematical Operators
==============================

```
Operator   Type (Unary/Binary)   Name                  Sample Form     Description
--------   -------------------   -----------           -----------     --------------------------------------------------
=          Binary                Assignment            x = y           Assigns the value of y to x, See below for details
+          Binary                Addition              x + y           Adds x and y
-          Binary                Subtraction           x - y           Subtracts y from x
*          Binary                Multiplication        x * y           Multiplies x and y
/          Binary                Division              x / y           Divides x by y, See below for more details
%          Binary                Modulo                x % y           Finds the remainder of x / y, See below for details
+=         Binary                Add Assignment        x += y          Modifies x by increasing its value by y
-=         Binary                Subtract Assignment   x -= y          Modifies x by decreasing its value by y
*=         Binary                Multiply Assignment   x *= y          Modifies x by multiplying its value by y
/=         Binary                Division Assignment   x /= y          Modifies x by dividing its value by y
%=         Binary                Modulo Assignment     x %= y          Modifies x by assigning x % y to x
++         Unary                 Increment             x++             Modifies x by increasing its value by 1
--         Unary                 Decrement             x--             Modifies x by decreasing its value by 1
```

These are the basic mathematical operators of C. There are many other operators not covered in this lesson, devoted
to such things as performing bitwise manipulation on numbers and combining logical operators, but don't worry about 
those for now. I'm focusing strictly on mathematical operations, which after all, is why computers were originally
invented - to do math for us.

Combining Operators
===================

At this point you might be a little bit confused when you hear me talking about unary and binary operators.
For example, if you look at a C statement that looks like:

```
x = y + z;
```

You might be thinking, wait a second, that's three operands (x, y, and z), not one or two operands. But we have to remember
to break the statement up into pieces and look at its constituent components.

In the above statement, the "+" operator operates on y and z - adding them together, and the = operator also
operators on two things, the left hand side of the equal sign, and the right hand side of the equal sign.

Let's visualize it like this:

```
    The + operator operates on y and z
      |
      |
    +---+
    |   |
    v   v
x = y + z;
-   -----
^     ^
|     |
|     |
+-----+
   |
   |
The equal operator operates on the left hand side, x, and the right hand side, which is the
result of adding y and z together.
```

We can string operators together to form longer, complex expressions. For example, to add b, c, and d
together, assigning the result to d, we can write:

```
a = b + c + d;
```

If you remember back to algebra class you might recall that mathematical operators get applied in a
certain order. I'm not going to cover that in this lesson, but suffice it to say that C follows the
same order of operation rules that you covered in algebra class, and you can also use parentheses in
expressions just like you do in algebra. If you need a refresher on order of operations, I suggest you
Google for "algebra pemdas", but it's not necessary for right now. We are going to be focusing on very
simple mathematical expressions for the next several lessons.

Integer Division
----------------

Exercise
========

Write a program that declares ...