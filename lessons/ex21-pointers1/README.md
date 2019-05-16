Introduction to Pointers
========================

C provides very low-level access to variables and the locations where they are stored
in memory. Programs written in C can manipulate the memory of a computer in a way that
other higher level languages are not allowed to do because the runtime system of the 
language insulates the programmer from the underlying hardware of the computer.

This feature of C makes it very powerful. As the saying goes, with great power comes
great responsibility. It's commonly said the "C gives you enough rope to hang yourself",
meaning that the features of the language, if used incorrectly, can corrupt the memory
of the computer and cause all sorts of strange and hard to debug defects in your code.

However, we must learn about these features in order to exploit the full power of C and
to write programs the way C intended them to be written. Let's dive in.

Variables and Their Locations
=============================

Imagine we have a very simple program that declares a single variable called my_value;

```
#include <stdio.h>

int main()
{
  int my_value = 25;

  .
  . The rest of the code
  .
}
```

When the C program starts running, it creates two special areas in memory where variables
are stored. One area is called the "stack" and the other area is called the "heap".

All of the programs we've written so far have used variables located in the stack. Whenever
we declare a variable, the value of the variable is placed onto the stack. As we declare more
variables, the stack grows to accomodate the new variables we've declared.

The heap is where we can dynamically allocate larger blocks of memory. We're not going to worry
about the heap for right now. We're focusing exclusively on what happens on the stack - the
primary place where declared variables are placed.

Here's what is looks like visually:

```

?????  

  
```

Suppose we'd like to know what the actual memory location of where the varialbe my_value is
stored. To be clear, we're not looking for the value of the variable (which is obviously 25 because
that's how we've initialized it), we're looking for the ADDRESS in memory of where it is stored.

Whe can use the ampersand sign in front of the variable to retrieve it's address. We can print the
value with a %p format specifier in the printf statement, just like we use the %d format specifier
to print integers.

```
#include <stdio.h>

int main()
{
  int my_value = 25;

  printf("The address of the my_value variable is: %p\n", &my_value);

  return 0;
}
```

When I run this on my computer I get:

```
The address of the my_value variable is 0x7ffeedcb98e8
```

You may get a different value on your computer. It's up to the operating system to decide what location
in memory to load the program, and this in turn will affect the location of the stack, which will affect
the location of your variables.

Let's add a few more variables and print their addresses:

```
#include <stdio.h>

int main()
{
  int value1 = 10;
  int value2 = 20;
  int value3 = 30;
  int value4 = 40;

  printf("value1 address = %p\n", &value1);
  printf("value2 address = %p\n", &value2);
  printf("value3 address = %p\n", &value3);
  printf("value4 address = %p\n", &value4);

  return 0;
}
```

My computer prints:

```
value1 address = 0x7ffee2b8e8e8
value2 address = 0x7ffee2b8e8e4
value3 address = 0x7ffee2b8e8e0
value4 address = 0x7ffee2b8e8dc
```

Storing a Location in Another Variable
======================================

What happens if we want to store the location of one variable into the value of another variable.
We need some way to declare a variable such that it can hold a pointer. In other words, we need
a way to say "this thing is a pointer too an integer".

We declare such variables like this:

```
The type, "int *" means the variable is a pointer to an integer
  |
  |
  v
-----
int *my_pointer;
     ----------
          ^
          |
          |
     The name of the variable, same as we declare any other variable
```

The above code essentially is read from right-to-left:

```
my_pointer is a pointer to an integer
```

Dereferencing a Pointer
=======================

Suppose we have a variable which is a pointer, whose current value is pointing to a
certain variable. It's a little easier to describe this in code than it is in English.

Let's look at an example of what I mean:

```
int month = 10;
int *pointer_to_month = &month;
```

We have two variables: an ordinary integer, named month, with a current value of 10. We have
a second variable, named pointer_to_month, which holds the location of the variable "month".

Now suppose we want to use the pointer_to_month to change the actual value of month. This is
called "dereferencing" the pointer. Dereferencing means "accessing the value at the location
pointed to by the pointer".

Here's that it looks like:

```
We want to dereference the pointer
|
|
v
*pointer_to_month = 11;
```

The variable month will now have a value of 11.

Putting it Together
===================

Let's look at a few complete examples to drive the point home.

```
int month1 = 4;
int day1 = 26;
int year1 = 2019;

int month2 = 5;
int day2 = 15;
int year2 = 2020;

int *pointer_to_month = &month1; // Get the location of month1, store it in pointer_to_month
int *pointer_to_day = &day1;     // Get the location of day1, store it in pointer_to_day
int *pointer_to_year = &year1;   // Get the location of year1, store it in pointer_to_year

// Print the first date - will print 4/26/2019 because the 3 pointers are currently
// pointing to month1, day1, and year1
printf("Date1 is %d/%d/%d\n", month1, day1, year1);

// Print the date by dereferencing the pointers - will also print 4/26/2019
printf("Date via pointers is %d/%d/%d\n", *pointer_to_month, *pointer_to_date, *pointer_to_year);

// Change the 3 values currently referenced by the 3 pointers
// This will modify the values of month1, day1, and year1
*pointer_to_month = 3;
*pointer_to_day = 12;
*pointer_to_year = 2018;

// Print the first date again. The date has changed because we changed the values
// by dereferencing the pointers
printf("Date1 is %d/%d/%d\n", month1, day1, year1);

// Print the second date - will print 5/15/2020
printf("Date2 is %d/%d/%d\n", month2, day2, year2);

// Change the 3 pointers to point to the second date
pointer_to_month = &month2;
pointer_to_day = &day2;
pointer_to_year = &year2;

// Print the date by dereferencing the pointers - this will now print 5/15/2020 because
// we've modified the pointers
printf("Date via pointers is %d/%d/%d\n", *pointer_to_month, *pointer_to_date, *pointer_to_year);

// Change the 3 values currently referenced by the 3 pointers
// This will modify the values of month2, day2, and year2
*pointer_to_month = 2;
*pointer_to_day = 28;
*pointer_to_year = 2017;

// Print the second date - this will now print 2/28/2017 because
// we've modified the values by dereferencing the pointers
printf("Date2 is %d/%d/%d\n", month2, day2, year2);
```

Output:

```
Date1 is 4/26/2019
Date via pointers is 4/26/2019
Date1 is 3/12/2018
Date2 is 5/15/2020
Date via pointers is 5/15/2020
Date2 is 2/28/2017
```

Summary
=======

Here's a summary of what we've learned:

```
Syntax                  Description
-------------           -----------------------------------------------------------------------
int *my_pointer;        Declares a variable to be a pointer to an integer
my_pointer = &varname;  Sets my_pointer equal to the location of the variable varname
*my_pointer = value;    Sets the value at the location referred to by my_pointer equal to value
```

Exercise
========

Write a menu-driven program that performs the following functions

* Declares three variables gw_month, gw_day, gw_year to be George Washington's birthday
* Declares three variables al_month, al_day, al_year to be Abraham Lincoln's birthday
* Declares three variables bf_month, bf_day, bf_year to be Benjamin Franklin's birthday
* Declares three pointers to integers current_month, current_day, current_year
* Menu choices are as follows:
  1. Print current date
     Prints the date currently pointed to by current_month, current_day, current_year
  2. Set current date to George Washington
     Changes the 3 current pointers to point to gw_month, gw_day, gw_year
  3. Set Current date to Abraham Lincoln
     As per above for Abrahamn Lincoln
  4. Set current date to Benjamin Franklin
     As per above for Benjamin Franklin
  0. Exit the program
