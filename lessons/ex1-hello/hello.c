// This file is a C program
//
// Lines that begin with double slashes, such as this one, are called "comments".
// Comments let us inject human-readable instructions into our programs, just like
// I'm doing here.
//
// In this exercise you will write your first program in C. By tradition, whenever we
// learn a new programming language, we begin the journey by writing a program that
// prints "Hello, World!" on the screen.

// The C language is actually quite small. Most of the functionality that we need
// to build real programs are located in "libraries" that are referenced and linked
// external to our code. Don't worry about the details for now. We'll learn about
// all of that later.

// But, what you need to know now is that to use a library, we need to "include" the
// header file that corresponds to that library.

// To write this program, we need to use the "printf" command, and that command is
// located in a library called "stdio". The "std" stands for "stanard" and the "io"
// stands for "input/output". So to use printf, we need to include the file "stdio.h"

// We put that right at the top of our program, like so. Don't worry about all the
// details of how or why it works for right now.

#include <stdio.h>

// Next, we're going to declare the main entry point of our program. This is done as
// a C function, which we'll learn about later. The main function starts with this:

int main(int argc, char *argv[])
{
  // That looks ugly, doesn't it. You get used to it. Over time you may come to 
  // appreciate the terse syntax that the C language offers.

  // Because we're inside a function, to make my code more readable I "indent" the
  // code so that it is set off from the body of the function. C doesn't require you
  // to do this, but it's common practice among good programmers.

  // Okay, we're ready to use the printf function to print Hello, World onto the screen.

  /*

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
  ------ -            -- -                                           */
  printf("Hello, World\n");
  /*    - ------------  - -
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
      parameters to the function                                      */

  // Now were at the end of the program and we're going to return a value to the
  // operating system. Here I return 0 like so. Don't worry about why we do that.
  // I'll explain all of that later.

  return 0;

  // Now that that's over with, I use a closing curly brace to enclose the end of the 
  // function.
}

// And that's it.

// Exercise 1: Write a program that prints two lines of output. The first line
// should say "Greetings professor Falken". The second line should say
// "Shall we play a game?"
//
// Expected output:
// Greetings professor Falken
// Shall we play a game?

