Introduction to Functions
=========================

You've already seen a few cases where we needed to do a nearly identical thing in
different blocks of code. It gets tedious when we need to do that, and not only is
it tedious, but if we have a bug in our code we have to go fix it in multiple places.

Functions are a way that C gives us to encapsulate a set of functionality and be able
to use that functionality any where in our program where we need it.

Functions with No Return Value and No Parameters
================================================

We'll first look at the simplest form of a function: one that takes no parameters and
returns no value. 

Here's what the body of the function looks like:

```
This is the return type of the function.
Putting "void" here means the function does
not return a value to the caller.
 |
 |
 |    Here is where you put the name of
 |    the function
 |           |        
 |           |    If the function took any parameters, we would
 |           |    declare them in between the parentheses here. 
 |           |    This function takes no parameters, so we just don't
 |           |    put anything between the parentheses
 |           |        |
 v           v        |
---- ---------------- V
void my_function_name()
{
  // Your code goes here
}
```

Once we define a function we can call it from anywhere else like this:

```
my_function_name();
```

Just like we need to declare variables before we use them, we needd to declare our
functions before we use them. There's something in C called a "forward declaration"
that we'll learn about later, but we're not going to use those right now. For now you'll
put any functions you write at the top of the program, and the main() function will be
at the bottom of the program.

Why Use Functions
=================

There are several reasons why we would consider moving code into a function vs. just
having the code be inline like we've been writing up until now:

* Avoid writing nearly identical blocks of code in multiple places
* In programming, there's a concept called "single responsibility principle" which 
  means that any piece of code should have a single purpose. By moving code into 
  functions, and making each function be responsible for just one thing, our code
  is easier to read and debug
* The places where we use the function can be easier to read

Functions in Action
===================

So far we've been writing our calculator program to print the main menu inside the
do/while loop, like this:

```
#include <stdio.h>

int main()
{
  do
  {
    .
    . Code above the main menu
    .

    printf("\n");
    printf("Main Menu\n");
    printf("---------\n");
    printf("1. Clear all results\n");
    printf("2. Clear a slot\n");
    printf("3. Enter a value into a slot\n");
    printf("4. Copy a value to another slot\n");
    printf("5. Add two numbers\n");
    printf("6. Subtract two numbers\n");
    printf("7. Multiply two numbers\n");
    printf("8. Divide two numbers\n");
    printf("9. Modulo two numbers\n");
    printf("0. Exit the program\n");
    printf("\n");

    .
    . Code below the main menu
    .
  }
}
```

The makes the logic of our main do/while loop a little bit harder to read, because
everytime we read it we have to scan through the code that prints the main menu.
We know what that code does. It just prints the menu. It's a little bit of a nuisance
to read through it every time we look at that part of the code.

Let's move the code that prints the main menu out into a separate function. Here's
what it looks like now:

```
#include <stdio.h>

void print_main_menu()
{
  printf("\n");
  printf("Main Menu\n");
  printf("---------\n");
  printf("1. Clear all results\n");
  printf("2. Clear a slot\n");
  printf("3. Enter a value into a slot\n");
  printf("4. Copy a value to another slot\n");
  printf("5. Add two numbers\n");
  printf("6. Subtract two numbers\n");
  printf("7. Multiply two numbers\n");
  printf("8. Divide two numbers\n");
  printf("9. Modulo two numbers\n");
  printf("0. Exit the program\n");
  printf("\n");
}

int main()
{
  do
  {
    .
    . Code above the main menu
    .

    print_main_menu(); // Here's where we call the function that prints the main menu

    .
    . Code below the main menu
    .
  }
}
```

Our code is now easier to read. Whenever another programmer reads through our main
function, they see "print_main_menu" and they think "Ok. I get it. That's the part of
the code that's going to print out the menu. Makes sense". They don't need to wade
through all the printfs to figure out what is the purpose of that chunk of code.

In a simple example like this it doesn't make much of a difference, but when your program
starts getting bigger and more complex, it's very useful to have your code isolated into
little chunks of functionality.

Exercise
========

Write a program that has three functions:

* A function to print the main menu
* A function that prints all the months in the year, one per line
* A function that prints all the days in the week, one per line

Write a menu-driven program similar to what we've been writing so far. The program
should have three menu choices:

1. Print the months of the year
2. Print the days of the week
3. Exit the program

Call the functions you've written in the appropriate places of the code.

Sample output:

```
Main Menu
---------
1. Print the months of the year
2. Print the days of the week
0. Exit the program
Enter your choice: 1
January
February
March
April
May
June
July
August
September
October
November
December
Main Manu
---------
1. Print the months of the year
2. Print the days of the week
0. Exit the program
Enter your choice: 2
Sunday
Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Main Manu
---------
1. Print the months of the year
2. Print the days of the week
0. Exit the program
Enter your choice: 0
```
