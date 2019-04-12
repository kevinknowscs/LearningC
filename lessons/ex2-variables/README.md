
Working with Variables in C
===========================

At their core, computers process and manipulate numbers. In the process of working
with these numbers, we must have a way to store, access, and reference the values
of these numbers.

In programming languages, this is done by using "variables". Variables are a named
reference to a specific location in memory that can be used to store a value.

In C, you must "declare" a variable before you can use it. Not all programming
languages work this way. Some languages allow you to use variables on-the-fly as-needed
without needed to declare them, but in C, you must declare a variable to be able to
use it.

When we declare a variable, we are telling the C compiler about our desire to keep
track of a specific area of memory, and it's associated value, using a named reference
The C program will create space in memory to store the value of the variable, and the
C compiler will generate the correct code to reference that area of memory whenever you
use a variable that you've declared.

In C, variables are declared as follows:

```
  The type of the variable, in the case int, which is a 32-bit (4 byte) signed integer
   |
   |    The name of the variable
   |       |
   |       |
   v       v
  --- -----------
  int my_variable;
```  

There are many different "types" that C supports. The sizes are sometimes platform=specfic,
but for a modern C compiler running on a 64-bit operating system, these are the typical
sizes.

```
Type             Description/Size                     Range
----             ----------------                     -------------------
char             A signed 8-bit (1 byte) value        -128 to 127
unsigned char    An unsigned 8-bot (1 byte) value     0 to 255
short            A signed 16-bit (2 byte) value       -32768 to 32767
unsigned short   An unsigned 16-bit (2 byte) value    0 to 65535
int              A signed 32-bit (4 byte) value       -2^31 to 2^31 - 1
unsigned int     An unsigned 32-bit (4 byte) value    0 to 2^32 - 1
long             A signed 64-bit (8 byte) value       -2^63 to 2^63 - 1
unsigned long    An unsigned 64-bit (8 byte value)    0 to 2^64 - 1
```

For now, we're only going to be dealing with plain ole "int", so you don't need to worry
about the other types.

We're also not going to be dealing with unsigned numbers for a while - we'll focus exclusively
on signed integers. Signed integers are easier to work with because they can hold both positive
and negative numbers.

Initializing Variables
======================

We can use the "=" operator to assign a value to the variable when we declare it, like so:

```
  int month = 4;
  int day = 19;
  int year = 2019;
```  

To shorten the initialization process we can do everything on one line separated with commands,
like this:

```
  int month = 4, int day = 19, int year = 2019;
```  

Printing Variables
==================

To print a variable, we need to pass in a format specifier to the printf function that
we used in the first lesson. For a signed integer, the format specifier is "%d". There are
many other format specifiers, but we're only going to use %d for now.

We can combine the format specifier with other text, like this:

```
  int year = 1732;
  printf("George Washington was born in %d\n", year);
```  

This will print:
----------------
```
George Washington was born in 1732
```

Exercise
========

Write a program that declares three integers, a, b, and c, on three separate lines. Initialize
a to 10. Initialize c to 20. Leave b uninitialized.

Print out the three values and their associated names, one per line.

Initialize three more variables, x, y, and z, on a single line. Initialize x to 10, y to 20,
and z to 30. 

Print out the three values and their associated names, one per line.

Sample Output
=============
```
a = 10
b = ?? some random value here ??
c = 20
x = 10
y = 20
z = 30
```
