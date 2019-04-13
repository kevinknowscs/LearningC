A Simple C Program
==================

In this lesson we'll discuss the basic structure of a C program. Let's have a look
at a simple C program that prints "Hello, World" onto the screen.

```
#include <stdio.h>

int main()
{
  printf("Hello, World!\n");
  return 0;
}
```

Now that we've seen a C program, let's go over the different parts of it.

Include Statements
==================

The C language is actually quite small. Most of the functionality that we need
to build real programs are located in "libraries" that are referenced and linked
external to our code. Don't worry about the details for now. We'll learn about
all of that later.

But, what you need to know now is that to use a library, we need to "include" the
header file that corresponds to that library.

To write this program, we need to use the "printf" command, and that command is
located in a library called "stdio". The "std" stands for "stanard" and the "io"
stands for "input/output". So to use printf, we need to include the file "stdio.h"

```
#include <stdio.h>
```

Comments
========

Sometimes we want to embed some human-readable text into our code to help the
next engineer reading the code to understand it better. These are called "comments".

In C, there are two ways to introduce comments into the code.

The first is a line comment. A line comment begins with two slashes. Everything after
the doubles slashes on the line are considered comments, and therefore ignored by the
C compiler.

```
printf("Some stuff"); // This is a comment and is ignored by the C compiler
```

Another type of comments are block comments. Block comments can extend onto multiple lines.
Block comments beging with /* and end with */. Everything in between the two markers are
ignored by the compiler.

```
/********************************************
 * Sometimes programmers like to format
 * nice looking comment headers that look
 * like this
 ********************************************/
printf("Here is some code");
```

The Main Function
=================

Discuss the main function

Printing Output
===============

Discuss how to use printf.

Ending the Program
==================

Discuss the return statement and the closing curly brace.

Exercise
========

