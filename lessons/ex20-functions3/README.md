Function with Parameters
========================

Functions get really useful when we start using them in conjunction with parameters.
Parameters act as inputs to the function. We declare parameters by placing them in
between the parentheses in the function signature.

Here's a simple function that takes in a parameter indicating the month, and returns
a value representing the number of days in that month.

```
                 The type of the parameter
                       |
                       |  The name of the parameter
                       |    |
                       v    v
                      --- -----
int get_days_in_month(int month)
{
  if (month == 1)
  {
    return 31;
  }
  else if (month == 2)
  {
    return 28;
  }
  else if (month == 3)
  {
    return 31;
  }
  else if (month == 4)
  {
    return 30;
  }
  else if (month == 5)
  {
    return 31;
  }
  else if (month == 6)
  {
    return 30;
  }
  else if (month == 7)
  {
    return 31;
  }
  else if (month == 8)
  {
    return 31;
  }
  else if (month == 9)
  {
    return 30;
  }
  else if (month == 10)
  {
    return 31;
  }
  else if (month == 11)
  {
    return 30;
  }
  else
  {
    return 31;
  }
}
```

Notice how we can use multiple return statements in a function. Once the function
hits a return statement, it returns back to the caller and does not execute any more
instructions within the body of the function.

We could then use the function in a program such as this:

```
int month;
printf("What month are you interested in? ");
scanf("%d", &month);
printf("There are %d days in month #%d\n", get_days_in_month(month), month);
```

Depending on the user reply, this will output something like:

```
What month are you interested in? 7
There are 31 days in month #7
```

Multiple Parameters
===================

We can declare multiple parameters by separating them with commas in the function signature.

Here's a simple function that takes 3 parameters:

```
void print_birthday(int month, int day, int year)
{
  printf("Your birthday is %d/%d/%d\n", month, day, year);
}
```

Here's an example of how we could use it:

```
int month, day, year;
printf("What month were you born? ");
scanf("%d", &month);
printf("What day were you born? ");
scanf("%d", &day);
printf("What year were you born? ");
scanf("%d", &year);

print_birthday(month, day, year); // Pass the three parameters to the print_birthday function
```

Exercise
========

Write a program that contains three function:

* A function that prints the square of a number
* A function that prints the cube of a number
* A function that prints whether a number is even or odd

The program asks the user to enter a number. It then calls the three functions and prints
the answers.

Sample output:

```
Enter a number: 5
5 squared is 25
5 cubed is 125
5 is an odd number
```
