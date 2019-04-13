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

I've purposely left out a lot of details about include statements, but this is all 
you need to know for now. For the next several lessons, you'll include this line
at the top of every C program you write.

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

Personally I prefer to use line comments most of the time.

The Main Function
=================

When you run your program, the operating system needs to know the "entry point" of your
program. The entry point designates the very first line of code that will execute when
your program first starts running.

In C, the program entry point in designated with a special function called "main". The
beginning of the main function looks like this:

```
int main()
{
```

The "int" declares that the function will return an integer value. Don't worry about return
values right now; we'll discuss those in another lesson.

Next comes the name of the function - in this case "main", which is a special function that
designates the start of the program. Any time you write a program in C, it must have a main
function in it somewhere.

The open and closing parenthesis after main designates that this function takes no parameters.
If the function took parameters, we could put them inside the paranthesis. Don't worry about
function parameters for now. We'll discuss those in a separate lesson.

Finally, the open curly brace tells the compiler that we've finished declaring the name of
our function and we're ready to start writing the code that will go inside the function.

As with a lot of things in C, there are more details that I've left out. I want to stay focused
on the important details, and leave off unnecessary details that we can learn more about later.

Printing Output
===============

Now that we're inside the function, we can use the printf command to print something on the
screen.

```
   This is the name of the function we're going to call (printf)
    |
    |  The double quote marks
    |  the beginning of a "string"
    |  of text
    |    |
    |    |        The \n is how we tell
    |    |        the computer to move the
    |    |        cursor to the next line
    |    |        on the computer screen
    |    |            |
    |    |            | The closing parenthesis marks
    |    |            | the end of the parameters to
    |    |            | the printf function
    |    |            |  |
    |    |            |  |
    v    v            v  v
  ------ -            -- -                                
  printf("Hello, World\n");
        - ------------  - -
        ^      ^        ^ ^
        |      |        | |
        |      |        | |
        |      |        | The semicolon marks the end of the statement.
        |      |        | In C, all statements end with a semicolon.
        |      |        |
        |      |     The closing double quotes indicates
        |      |     the end of the text we want to print
        |      |
        |   Here is the actual text we
        |   want to print
        |
      The open parenthesis begins the
      area where we are going to pass
      parameters to the function
```      

Ending the Program
==================

We've written most of our program. There's only two things left.

First, since the main function returns an integer value, we want to use the return
statement to specify what value to return. In the case of the main function, we should
always return 0 to designate to the operating system that the program completely normally
and did not encounter any errors.

Therefore, we insert the return statement:

```
  return 0;
```  

Finally, we insert a closing curly brace to close out the function. The closing curly brace
matches the opening curly brace that we put right after the main function declaration.

Exercise
========

Write a program that prints two lines of output. The first line
should say "Greetings professor Falken". The second line should say
"Shall we play a game?"

Expected output:

```
Greetings professor Falken
Shall we play a game?
```