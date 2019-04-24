Functions that Return a Value
=============================

It's possible for the function to return a value back to it's caller. This
is very useful in many cases.

First, we declare what type of value our function will return, like this:

```
The type of value the function returns
 |
 |
 v
---
int my_function_here()
{
  .
  . The body of the function
  .
}
```

To exit the function and return a value to the caller, we use the return statement.
Let's look at a very simple function:

```
int get_months_in_year()
{
  return 12;
}
```

We can then call it like this:

```
printf("There are %d months in a year\n", get_months_in_year());
```

We can use the name of the function exactly where we would use any other variable or
mathematical expression.

Return Values in Action
=======================

A function that does nothing but return the same value each time isn't very useful.
Let's try something more useful.

Suppose we want to write a function that we can use in our menu-driven programs that
return the current menu choice. That way we have a nice, isolated piece of functionality
that is responsible for doing that.

Here's how we can do that:

```
int get_choice()
{
  int choice; // We declare a variable INSIDE the function
  printf("Enter your choice: ");
  scanf("%d" &choice);

  return choice;
}
```

We haven't touched on the idea of SCOPING yet, and we'll need to give that a fuller treatment
in future lessons. For now all you need to know is that you can declare variables inside of
a function, and those variables will only be accessible INSIDE that function. In a very real
sense, variables desclared inside of a function are "private" to that function. They aren't
visible outside of the function.

In the above code, the variable choice is private the the function get_choice(). If we declare
another variable of the same name in a different function, that variable is completely separate
from the variable in the other function. Let's see how that looks below.

In our main function, we can call the get_choice() function like this:

```
int main()
{
  do
  {
    int choice; // This is a different "choice" variable than the one inside get_choice()

    print_main_menu();
    choice = get_choice();
  } while (choice != 0);
}
```

IMPORTANT: The "choice" variable declared in our main function is a DIFFERENT variable than the
"choice" variable in the get_choice() function. We can use the same name of a variable in two
separate functions, because each variable is "private" to that function and is only visible to 
the program within the bounds of that function.

Notice how much easier to read our main function from our calculator program is becoming. By
factoring out blocks of code that perform a specific action, we can now tell what our program
is doing based on the names of the functions. Of course it's still up to the programmer to assign
meaningful names to functions, but at least now we have a way to structure our code so that it is
more readable and more maintainable.

Exercise
========

Write a program that contains two functions.

The first function asks the user what year they were born.

The second function asks the user what year it is now.

Give each function a meaningful name.

The program estimates the age of the user by subtracting the current year from the year they
were born. We're not using months or days in our calculation, so the program might be off by
a year in either direction. That's okay. We're just focusing on how to use functions.

Sample output:

```
What year were you born? 1990
Whar year is is now? 2019
You are 29 years old.
```
