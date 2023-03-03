# Notes

## Preprocessor directives

Lines starting with # are known as preprocessor directives.

## White space

C++ compiler ignores white spaces.

## Namespace

A namespace is a region that defines the context in which variables and functions can be used. All the elements of the C++ standard library are declared within a region called an `std`.

## main() function

It is the point from where the C++ program starts its execution.

## Hello, World

```cpp
#include <iostream>

using namespace std;

int main() {
  cout << "Hello, World!";
}
```

Anything written inside double quotes is known as a `string`.

## endl

We can use `endl` with `cout` to add a new line after the text.

## Comments

Comments are lines ignored by the compiler. They are used to make the code more readable.

### Single-line comments

We write a single-line comment after two backslashes //.

### Multi-line comments

Multi-line comments start with /\* and end with \*/.

## Variables

A variable is a location in the computer's memory where we can store data. The value of this data can be changed during the execution of a program. Each variable has a unique and meaninful name which is known as an **identifier**.

### Variable declaration

```cpp
variable_datatype variable_name;
```

We can declare more than one variable in a single line.

```cpp
int number1, number2, number3;
```

### Variable initialization

```cpp
variable_datatype variable_name = variable_value;
```

### Variable declaration and initialization in one step

```cpp
int number = 100;
```

To print the value of a variable, use `cout` followed by the insertion operator `<<` and variable name.

### Identifiers

**Best coding practice**: Use descriptive and meaningful names for the variables to make the code self-explanatory.

#### Rules

- An identifier can only contain uppercase alphabets, lowercase alphabets, numbers, and underscore.
- The first letter of an identifier can be an alphabet or an underscore (not a good practice).
- The first letter of an identifier cannot be a number.
- C++ is a case-sensitive language.
- An identifier cannot contain white space.
- An identifier cannot have special characters such as \&, \@, \*, \!, etc.
- We cannot use keywords as identifiers (Keywords are a collection of reserved words and predefined identifiers in C++, like `return`, `if`, ...).

## Constants or literals

**Constants** are similar to variables except that we can't change their value during the code execution.

The basic syntax for creating a constant is:

```cpp
const constant_datatype constant_name = constant_value;
```

**Common programming error**: In C++, you have to initialize a constant at the time of its declaration. If you don’t initialize a constant at the time of creating it, an error will occur.