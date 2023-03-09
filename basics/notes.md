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

## Data Types

**Data type** tells the compiler what type of data a particular variable can store. The compiler allocates the memory to the variable based on its data type.

- Specify the type of value a particular variable can store.
- Reserve the number of bytes for a variable in memory.

### Primitive or Fundamental Data Types

- int
- float
- double
- char
- boolean
- void

#### Integer

Comprises all positive and negative whole numbers. We use the `int` keyword to define the integer data type. A variable of `int` type is allocated 4 bytes of memory. It can store any value from $-2^{31}$ to $2^{31} - 1$.

```cpp
int integer_number = 100;
```

If you store 100.5 in an `int`, it will be truncated to 100.

#### Floating-point

It contains a number with a fractional part. We use the `float` keyword to define the floating-point data type. A variable of `float` type is allocated 4 bytes of memory. It can store any value in the range $\pm 3.40 \times 10^{\pm38}$.

```cpp
float float_number = 10.7;
```

#### Double

It contains a number with a fractional part. We use the `double` keyword to define the double data type. A variable of `double` type is allocated 8 bytes of memory. It can store any value in the range of $\pm 1.79 \times 10^{\pm 308}$.

```cpp
double double_number = 10.65417;
```

A `float` can store seven digits after a decimal point precisely. Whereas, `double` can store 15 digits after a decimal point precisely. It is recommended to use `double` for floating-point values.

#### Character

It contains a single character from the ASCII set. We use the `char` keyword to define the character data type. A variable of `char` type is allocated 1 byte of memory. It can store value from $-2^7$ to $2^7 - 1$.

```cpp
char character = 'b';
```

A `char` value is always written in single quotation marks.

#### Boolean

It stores a logical value. It can store `true` or `false`. We can also use `1` to represent `true` and `0` to represent `false`. We use the `bool` keyword to define the boolean data type. A variable of `bool` type is allocated 1 byte of memory.

```cpp
bool boolean = false;
```

#### Void

The `void` data type represents an entity without a value. It will be used in functions.

### Derived Data Types

- Function
- Array
- Pointer
- Reference

### User-defined Data Types

- Structure
- Union
- Enum
- Class
- Typedef

## Data Type Modifiers

Data Type Modifiers are used with primitive data types to change the meaning of predefined data types according to the situation.

C++ supports the following data type modifiers:

- long
- short
- unsigned
- signed

We can use data type modifiers with `int`, `double` and `char` data types.

### long

It is used to increase the length of a data type to 4 more bytes. We can use `long` with `int` and `double` data types.

### short

It decreases the avaliable length of a data type to 2 bytes. We can use `short` with an `int` data type.

### unsigned

It allows us to store positive values only. We can use `unsigned` with `char` and `int` data types. With `unsigned int`, we can store any value from 0 to 4294967295. With `unsigned char`, we can store any value from 0 to 255.

### signed

It allows us to store both positive and negative values. We can use `signed` with `char` and `int` data types. With `signed int` we can store any value from -2,147,483,648 to 2,147,483,647. With `signed char`, we can store any value from -128 to 127.

## Type-casting

It is a way to convert the value of one data type to another data type.

### Implicit casting

The compiler automatically converts one data type to another.

```cpp
int x = 13.9;
```

To avoid data loss, we should always do type-casting from smaller to larger data types.

### Explicit casting

The user manually converts one data type to another. The basic syntax for explicit type casting in C++ is:

```cpp
(data_type) variable_name;
```

## String

It is plain text that represents alphanumeric data. A string comprises one or more characters. It is always written inside double quotes.

```cpp
string text = "Hey12345";
```

Strings are not allocated a fixed amount of memory during the time of declaration.

## Escape sequence

An escape sequence comprises two or more characters that are used to modify the format of the output. The first character in the escape sequence is the backslash \\. The most commonly used escape sequences are:

| **Escape Sequence** |   **Meaning**   |                    **Description**                    |
|:-------------------:|:---------------:|:-----------------------------------------------------:|
|          \n         |     New Line    |   Moves the cursor to the beginning of the next line  |
|          \t         |  Horizontal Tab |   Moves the cursor up to 8 spaces towards the right   |
|          \"         |   Double Quote  |           Inserts double quote in the output          |
|          \r         | Carriage Return | Moves the cursor to the beginning of the current line |
|          \\         |    Backslash    |              Displays backslash character             |
|          \'         |   Single Quote  |           Inserts single quote in the output          |
|          \b         |    Backspace    |               Deletes the last character              |

## User input

In input operation, we take data from the user and store it in the memory.

### Syntax

```cpp
cin >> variable_name;
```

We use a `cin` in combination with the extraction operator `>>` to take input from the user.

## Operators

An operator is a symbol that takes one or more values as input and outputs another value after perfoming a particular operation.

**Operands** are the data items on which an operation is being done.

### Types of operators

- **Unary** operator -> operates on one operand.
- **Binary** operator -> operates on two operands.
- **Ternary** operator -> operates on three operands.

### Arithmetic Operators

They are used to perform numeric operations on operands.

| **Operator** |  **Operation** |                        **Use**                        |
|:------------:|:--------------:|:-----------------------------------------------------:|
|       +      |    Addition    |               Adds operand1 and operand2              |
|       -      |   Subtraction  |            Subtracts operand2 from operand1           |
|      \*      | Multiplication |            Multiplies operand1 and operand2           |
|       /      |    Division    |             Divides operand1 and operand2             |
|      \%      |     Modulus    | Returns remainder after dividing operand1 by operand2 |

The result of / operator between `int`s is also of type `int`, so if it is necessary, the result will be truncated. If you want a quotient with a fractional part, use `float` or `double`.

Using \% with `float` operands will cause an error.

### Assignment operator

It takes the value on its right-hand side and assigns it to the operand on the left-hand side.

In C++, there is only one assignment operator:

| **Operator** |  **Operation**      |                        **Use**                        |
|:------------:|:-------------------:|:-----------------------------------------------------:|
|       =      |    Assigns a value  |     Assigns the value of operand2 to operand1         |

### Compound assignment operator

It is used to perform an operation and then assign the result to the operand on the left-hand side.

| **Operator** |         **Operation**         |                                              **Use**                                             |
|:------------:|:-----------------------------:|:------------------------------------------------------------------------------------------------:|
|      +=      |    Addition and assignment    |               Adds operand1 and operand2, and then assign updated value to operand1              |
|      -=      |   Subtraction and assignment  |            Subtracts operand2 from operand1, and then assign updated value to operand1           |
|      \*=     | Multiplication and assignment |            Multiplies operand1 and operand2, and then assign updated value to operand1           |
|      /=      |    Division and assignment    |              Divides operand1 by operand2, and then assign updated value to operand1             |
|      \%=     |     Modulus and assignment    | Returns remainder after dividing operand1 by operand2, and then assign updated value to operand1 |

### Relational Operators

A relational operator compares the value of two operands. Its output is a `bool` data type.

| **Operator** |       **Operation**      |                           **Use**                          |
|:------------:|:------------------------:|:----------------------------------------------------------:|
|       >      |       Greater than       |       Returns 1 if operand1 is greater than operand2       |
|      >=      | Greater than or equal to | Returns 1 if operand1 is greater than or equal to operand2 |
|       <      |         Less than        |         Returns 1 if operand1 is less than operand2        |
|      <=      |   Less than or equal to  |   Returns 1 if operand1 is less than or equal to operand2  |
|      ==      |         Equal to         |         Returns 1 if operand1 is equal to operand2         |
|      !=      |       Not equal to       |       Returns 1 if operand1 is not equal to operand2       |

When applied to `char` operands, the compiler will compare the ASCII values of the characters.

Writing relational expressions without round brackets in the print statement will generate an error.

### Logical Operators

They are either used to combine two or more boolean operands or to negate the result of the original operand.

| **Operator** | **Operation** |                              **Use**                              |
|:------------:|:-------------:|:-----------------------------------------------------------------:|
|       !      |      NOT      |                   Negates the value of operand1                   |
|      &&      |      AND      |     Returns 1 if operand1 and operand2 both evaluates to true     |
|     \|\|     |       OR      | Returns 1 if either operand1 or operand2 or both evaluate to true |

They are generally used to control the flow of the program. They allow a program to decide the flow of execution based on certain conditions.

### Bitwise Operators

A bitwise operator performs bit by bit processing on the operands. It converts operands in decimal form into binary form, perform the particular bitwise operation, and then returns the result after converting the number back into decimal form.

| **Operator** |  **Operation** |                                            **Use**                                           |        **Example**       |
|:------------:|:--------------:|:--------------------------------------------------------------------------------------------:|:------------------------:|
|       &      |   Bitwise AND  |         If the corresponding bit in both operands is 1, it will return 1, otherwise 0        |    1 & 1 = 1 // 1 & 0 = 0   |
|      \|      |   Bitwise OR   | If the corresponding bit in at least one of the operands is 1, it will return 1, otherwise 0 |   1 \| 1 = 1 // 1 \| 0 = 1  |
|      >>      |   Right shift  |   Move all the bits in operand1 to the right by the number of places specified in operand2   |        2 >> 1 = 1        |
|      <<      |   Left shift   |    Move all the bits in operand1 to the left by the number of places specified in operand2   |        2 << 1 = 4        |
|       ^      |   Bitwise XOR  |   If the corresponding bit in both the operands is opposite, it will return 1, otherwise 0   |    1 ^ 1 = 0 // 1 ^ 0 = 1   |
|       ~      | Tilde operator |              It is bitwise NOT operator and inverts the bits of an integer value             | ~(0110) = 1001 // ~(7) = -8 |

#### Right shift

Right-shifting an `op1 >> op2` is equivalent to dividing op1 by $2^{op2}$.

#### Left shift

Left-shifting an `op1 << op2` is equivalent to multiplying op1 by $2^{op2}$.

### Precedence andd Associativity

In case there is more than one operator in an expression, **precedence** determines the order in which the operators should be evaluated. The operator with higher precedence will be evaluated first in an expression. For example, multiplication \* has higher precedence than addition +. Therefore, we first evaluate multiplication in an expression.

In case of parenthesis `()`, we first evaluate the expression inside the parenthesis.

**Associativity** determines the order in which the operators with same precedence should be evaluated.

In left associativity, we evaluate the expression from left to right if two or more operators have the same precedence. For example, addition and subtraction have the same precedence.

In right associativity, we evaluate the expression from right to left if two or more operations have the same precedence.

#### Order of precedence (highest to lowest)

|  **Category**  |             **Operators**            | **Associativity** |
|:--------------:|:------------------------------------:|:-----------------:|
| Multiplicative |                \* / \%               |   Left to right   |
|    Additive    |                  + -                 |   Left to right   |
|      Shift     |                 << >>                |   Left to right   |
|    Equality    |                 == !=                |   Left to right   |
|   Bitwise AND  |                   &                  |   Left to right   |
|   Bitwise XOR  |                   ^                  |   Left to right   |
|   Bitwise OR   |                  \|                  |   Left to right   |
|   Logical AND  |                  &&                  |   Left to right   |
|   Logical OR   |                 \|\|                 |   Left to right   |
|   Conditional  |                  ?:                  |   Right to left   |
|   Assignment   | = += -= \*= /= \%= >>= <<= &= ^= \|= |   Right to left   |

## Conditional Statements

C++ supports the following conditional statements:

- If statement
- If-else statement
- Nested else-if statement
- Switch statement

### If Statement

The `if` statement instructs a compiler to execute a particular block of code when the condition evaluates to true.

```cpp
if (condition) {
  statement1;
  statement2;
  .
  .
  .
  statementN;
}
```

In C++, a zero or null value is considered false, and non-zero values are considered true.

### If-else Statement

In the `if-else` statement, when the condition in an `if` statement evaluates to false, the compiler executes the code inside the `else` block.

```cpp
if (condition) {
  statement1;
  statement2;
  .
  .
  .
  statementN;
}
else {
  statement1;
  statement2;
  .
  .
  .
  statementN;
}
```

### Nested else-if Statement

In C++, we can use the `else-if` statement to check multiple conditions in a program.

```cpp
if (condition) {
  statement1;
  statement2;
  .
  .
  .
  statementN;
}
else if (condition) {
  statement1;
  statement2;
  .
  .
  .
  statementN;
}
else {
  statement1;
  statement2;
  .
  .
  .
  statementN;

}
```

### Switch Statement

The `switch` statement evaluates the given expression and then compares its value with each case label. If the value of a case label equals the value of the expression, the statement(s) specific to that case is executed.

```cpp
switch (expression) {

  case value1:
  //code body
  break;

  case value2:
  //code body
  break;
  .
  .
  .
  default:
  //code body
}
```

Switch expression and case label accept variables of `int` or `char` data types.

When the compiler encounters a break statement, it transfers control to the line after the switch block.

If the value of the expression does not match any of the case labels, the `default` case is executed.

If we don't add a `break` statement to a case, the code specific to all the proceeding cases is also executed.

#### Example program for ranges of values

```cpp
#include <iostream>

using namespace std;

int main() {
  // Initialize variable money
  int money = 6;
  switch (money) {
    // first case
  case 20 ... 100:
    cout << "You can gift a watch" << endl;
    break; 
    // compares value of case label from 10 to 19 with the value of money
  case 10 ... 19:
    cout << "You can gift a comic book " << endl;
    break;
    // compares value of case label from 9 to 5 with the value of money
  case 5 ... 9:
    cout << "You can gift a chocolate " << endl;
    break;
    // default case
  default:
    cout << "You can gift a pen " << endl;
  }
  return 0;
}
```

### Conditional Operator

The conditional operator evaluates the given condition and returns the result accordingly.

```cpp
(condition) ? expression1 : expression 2
```

`expression1` is executed when condition is true and `expression2` is executed when condition is false.

## Loops

In computer language, loops allow you to repeat a particular block of code until the specified condition is met.

Advantages:

- Execute a particular piece of code multiple times
- Avoid duplication in our code
- Make the code more readable
- Save our time
- Create an efficient and manageable program
- Make programming fun

In C++, we have:

- while loop
- do-while loop
- for loop

### while loop

The `while` loop keeps executing a particular code block until the given condition is true. It does not know in advance how many times the loop body should be executed.

The condition in the while loop is evaluated before executing the statements inside its body. Therefore, the while loop is called an entry-controlled loop.

```cpp
while (condition) {
  statement1;
  statement2;
  .
  .
  .
  statementN;
}
```

### do-while loop

The `do-while` loop is similar to the `while` loop, with the exception that it executes the block of code and then checks the given condition. Because of this, it is called an exit-controlled loop.

```cpp
do {
  statement1;
  statement2;
  .
  .
  .
  statementN;
} while (condition);
```

### for loop

The `for` loop keeps executing a particular code block as long as the given condition is true.

```cpp
for (counter = 0; counter < 2; counter++){
  statement1;
  statement2;
  .
  .
  .
  statementN;
}
```

### Infinite loop

The infinite loop keeps executing repeatedly and never terminates.

```cpp
for ( ; ; ){
  statement1;
  statement2;
  .
  .
  .
  statementN;
}
```

The termination condition was not specified in the `for` loop, therefore, the loop assumes that the condition is `true` and keeps executing the loop body.

### Nested Loop

A loop inside the body of another loop is called a nested loop.

```cpp
for (outer = 0; outer < 2; outer++){
  // body of outer for loop
  for (inner = 0; inner < 2; inner++){
    // body of inner for loop
  }
  // body of outer for loop
}
```

We can have multiple loops inside the body of a loop.

### break Statement

The break statement terminates the loop and transfers control to the very next statement after the loop body.

### continue Statement

The continue statement makes the compiler skip the current iteration and move to the next one.

## Functions

A function is a block of code that performs a particular task. It is also given a name.

In C++, we have two types of functions:

- Library functions
- User-defined functions

Library functions are also known as built-in functions. They are already defined in the C++ header files such as `<iostream>`, `<string>` and `<cmath>`.

User-defined functions are defined by users according to their needs.

### Advantages

- Make the code reusable
- Divide the code into small modules
- Make the debugging of the program easier
- Make the code neat
- Avoid code repetition

The purpose of a function is to define the code block once and then use it many times.

### Function creation

In C++, function creation consists of the following two steps:

- Function declaration
- Function definition

#### Function declaration

It tells the compiler about:

- The return type of function
- The function name
- The number of parameters and their data types.

```cpp
return_type function_name (function_parameters);
```

The `return_type` specifies what type of data a function returns to the calling point after performing its task.

It is possible for a function to return nothing in output. Such functions have a `void` return type.

Whenever we declare a function, we give it a unique name (`function_name`). We then use the same name to call it throughout the program.

When we call a function, we pass values to the function parameters. These values are known as arguments, or actual parameters. Passing parameters in a function is optional.

#### Function definition

It tells what a function will do when it is called.

```cpp
return_type function_name (function_parameters)
{
  function_body
}
```

The function body consists of a group of statements that do a particular task. We write our function code inside the curly braces.

### Calling a function

The functions created in a program are not executed until we call them. When we call the function, control is given to the very first statement inside the called function.

```cpp
int main()
{
  function_name (values of parameters);

  return 0;
}
```

In C++, statements are executed from top to bottom. If we don't declare the function before `main()`, our program will be unaware of it and we will get a compilation error.

### Function Parameters

In C++, we have:

- Formal parameters
- Actual parameters

Formal parameters are the variables defined in the function definition. These variables receive values from the calling function. Formal parameters are commonly known as parameters.

Actual parameters are the variables or values passed to the function when it is called. These variables supply value to the called function. Actual parameters are commonly known as arguments.

#### Default parameter values

If we provide fewer or no arguments to the calling function, the default values of the parameters are used. We specify the default value in the function declaration using an equal sign.

```cpp
return_type function_name (formal_parameter = value);
```

If we specify the default value of the parameters, the parameters following it must have a default value. Otherwise, you get an error.

#### Passing actual parameters to the function

We can pass the actual parameters to the function in the following two ways:

- Pass by value
- Pass by reference

### Pass by Value

In pass by value, when we call a function, we pass the copy of the actual parameters to the formal parameters in the function. Hence, any changes made in the formal parameters inside the function will not affect the values of actual parameters in the main function.

In C++, by default, actual parameters are passed by value to the function.

#### Pass by Value Example

```cpp
#include <iostream>

using namespace std;
// function definition
void passValue(int number) {
  // Multiply the number by 10
  number = number * 10;
  cout << "Value of number inside the function = " << number << endl;
}

int main() {
  // Initialize variable
  int number = 10;
  cout << "Value of number before function call = " << number << endl;
  // Call function
  passValue(number);
  cout << "Value of number after function call = " << number << endl;

  return 0;
}
```

Output:

```cpp
Value of number before function call = 10
Value of number inside the function = 100
Value of number after function call = 10
```

### Pass by Reference

In pass by reference, when we call a function, we pass the address of the actual parameters to the formal parameters in the function. Hence, any changes made in the formal parameters inside the function affect the values of actual parameters in the main function.

To declare a function parameter as a reference, we have to add \& before the function parameter.

#### Pass by Reference Example

```cpp
#include <iostream>

using namespace std;
// function definition
void passReference(int &number) {
  // Multiply the number by 10
  number = number * 10;
  cout << "Value of number inside the function = " << number << endl;
}

int main() {
  // Initialize variable
  int number = 10;
  cout << "Value of number before function call = " << number << endl;
  // Call function
  passReference(number);
  cout << "Value of number after function call = " << number << endl;

  return 0;
}
```

Output:

```cpp
Value of number before function call = 10
Value of number inside the function = 100
Value of number after function call = 100
```

### Scope of Variables

The scope of a variable defines which part of the program that particular variable is accessible in. In C++, the variable can be either of these two:

- Local variable
- Global variable

A local variable can only be accessed within the block in which it is declared.

A block can be a function, loop, or conditional statement. These variables are created when the compiler executes that particular block and destroyed when the compiler exits that block.

Global variables can be accessed from the point they are declared to the end of the program. They are declared at the very start of the program before defining any function.

If two variables with the same name are declared twice within the same scope, the compiler will generate an error.

### Function Overloading

Function overloading is the concept of affecting a function's behaviour based on the number of parameters or their types.

```cpp
#include <iostream>
#include <string.h>

float min(float x, float y){
    return (x < y) ? x : y;
}

float min(float x, float y, float z){
    return x < y ? (x < z ? x : z) : (y < z ? y : z);
}

int main() {
  float f = min(4.45F, 1.23f);
  float f2 = min(4.45f, 1.23f, 0.19f);

  std::cout << f << std::endl;
  std::cout << f2 << std::endl;
}
```

```cpp
Output
1.23
0.19
```

#### Rules for choosing the right function

- We need to search for a function with the exact type
- We need to apply type promotion to the arguments
- We need to convert arguments

The compiler ignores references when overloading functions. For example, `min(int x, int y)` is the same as `min(int &x, int &y)`. The `const` and `volatile` qualifiers are also ignored.

#### Name Mangling (ChatGPT generated)

Name mangling is a process by which the names of functions and variables in C++ are encoded into a unique string that includes information about their signature and namespace. This is done to ensure that every function and variable has a unique name, even if they have the same name but different arguments, or are defined in different namespaces.

In C++, name mangling is necessary to support function overloading and to avoid naming conflicts between different libraries. When you declare a function with the same name as an existing function, the C++ compiler distinguishes them based on their parameter types and creates a unique mangled name for each one.

For example, consider the following C++ code:

```cpp
#include <iostream>

void foo(int x) {
    std::cout << "foo(int): " << x << std::endl;
}

void foo(double x) {
    std::cout << "foo(double): " << x << std::endl;
}

int main() {
    foo(42);
    foo(3.14);
    return 0;
}
```

In this code, the foo function is overloaded with two different versions, one that takes an int and one that takes a double. When you compile this code, the compiler generates mangled names for these functions, which might look something like `_Z3fooi` and `_Z3food`.

The exact rules for name mangling are implementation-dependent, but in general, the mangled name includes the function or variable name, the number and types of its parameters, and any namespace or class information. The mangled name is then used by the linker to link function calls to the correct implementation.

While name mangling is typically transparent to the programmer, it can cause issues when working with third-party libraries that have different name mangling schemes or when trying to debug code using a tool that doesn't understand name mangling.

### Lambda Functions (?)

A lambda function, or lambda, is a function without a name.

It can be written in-place and doesn't require complete implementation outside the scope of the main program. A cool feature of lambdas is that they can be treated as data. Hence, they can be stored or copied in variables.

#### Syntax for Lambdas

```cpp
[]  ()  ->  { . . . }
```

- \[ \]: captures the used variables
- \( \): necessary for parameters
- \-\>: necessary for complex lambda functions
- \{ \}: function body, per default `const`.
  - `[]() mutable -> {...}` has a non-constant function body.

Lambdas are just function objects automatically created by the compiler. A function object is an instance of a class for which the call operator, `operator ()`, is overloaded. The main difference between a function and a function object is that a function object is an object and can, therefore, have a state.

#### Closure

Lambda functions can bind their invocation context. Within the square brackets, we can specify which variables we want the lambda to capture.

|       **Binding**      |                 **Description**                 |
|:----------------------:|:-----------------------------------------------:|
|          `[ ]`         |                    no binding                   |
|          `[a]`         |                   `a` per copy                  |
|         `[&a]`         |                `a` per reference                |
|          `[=]`         |           all used variables per copy           |
|          `[&]`         |         all used variables per reference        |
|        `[=, &a]`       |     per default per copy; `a` per reference     |
|        `[&, a]`        |     per default per reference; `a` per copy     |
|        `[this]`        | data and member of the enclosing class per copy |
| `[l= std::move(lock)]` |               moves `lock` (C++14)              |

#### Generic lambda functions

With C++14, we have generic lambdas, which means that lambds can deduce their argument types.

A generic lambda is a function template.

A lambda should be short and concise.

A lambda should be self-explanatory, especially since it does not have a name.

## Recursion

A function that calls itself repeatedly until some condition is met is known as a recursive function. The process whereby a function repeatedly calls itself until a condition is met is known as recursion.

### Structure of a Recursive Program

```cpp
ReturnType RecursiveFunction (Input parameters)

if (base case condition)    // Base Case
{
  return value;
}
else                        // Recursive Case
{
  return RecursiveFunction (Input parameters)
}
```

- `if`: represents the base case when the function should stop calling itself. It simply returns the result to the calling point.
- `else`: represents the recursive case when the function calls itself repetitively until it reaches a base case.

The purpose of the main function is to serve as a starting point for a program. Therefore, the main function is not called recursively in a program.

Whenever we write a recursive function, we break a complex problem into a smaller subproblem and a simpler version of itself.

The condition where the function stops calling itself in its body is known as the **base case**.

Every recursive function must have a base case or an error is generated because of memory overflow.

### Advantages of recursion

- Recursion is a very powerful tool when we can define the problem in terms of itself.
- Recursion helps to write shorter code.
- We can convert loops into a recursive function.

### Differences between recursion and iteration

- In the computer language, iteration allows you to repeat a particular set of instructions until the specified condition is met. The recursive function allows you to keep calling itself in the function body until some condition is met.
- The sole purpose of iteration and recursion is to achieve repetition. Loops achieve repetition through the repetitive structure, whereas recursion achieves repetition through repetitive function calls.
- Iteration terminates when the loop condition fails. On the other hand, recursion terminates when the base condition evaluates to true.
- Iteration happens inside the same function, which is why it takes less memory. In the recursive function, there is the overhead of function calls that makes our program slow and consumes more memory.
- In iteration, our code size is very large. Meanwhile, recursion helps to write shorter code.
- Iterative code is faster than recursive code.
- Infinite loops will stop further execution of the program but do not lead to system crash. Infinite recursive calls, on the other hand, will result in a CPU crash because of memory overflow.

## Arrays

An array is a sequential collection of values of the same data type under the same name. It is a derived data type.

- Element - a value stored in an array. Elements in an array are stored at neighnoring memory locations.
- Index - an array index identifies the position of an element in an array. It starts from 0 and increments by one for each element added in an array.
- Size - the size of an array is the total number of elements that can be stored in the array.

### Use case

Suppose there are 100 students in a class, and you want to store their roll numbers. Declaring 100 variables and then storing the roll number of each student is quite an impractical approach. Here, arrays will come in handy!

### Declaration of an Array

```cpp
DataType ArrayName [ArraySize] ;
```

```cpp
int Roll_Number[100];
```

Here, we declare an array `Roll_Number` that can store 100 integer values. The compiler reserves space for 100 elements of type `int` consecutively in memory. Since the data type of an element is `int`, it reserves 4 bytes for each element, and in total, 400 bytes with the name `Roll_Number`.

### Initialization of an Array

#### Approach 1

We can assign a value to an array by accessing its index.

```cpp
ArrayName [ArrayIndex] = value;
```

```cpp
  Roll_Number[2] = 102;
```

The code above initializes the element of index 2 of the array `Roll_Number` to the value `102`.

#### Approach 2

We can assign a value to the array elements in the declaration step.

```cpp
DataType ArrayName [] = {value1, value2, ..., valueN};
```

```cpp
  int Roll_Number[ ] = { 100, 101, 102, 103, 104 };
```

If we are initializing an array in the declaration step, we don't need to specify the size of the array. The compiler automatically determines its size.

If we initialize an array with elements fewer than its total size, the compiler automatically initializes the remaining elements with their default values.

### Array Traversal

We can access the elements stored in an array by writing the array name, which is followed by its index in the square brackets.

```cpp
ArrayName [Index] ;
```

If you try to access an index that is greater than the size of an array, the compiler won’t generate an error, but may give you an unexpected output.

### Arrays and Functions

To pass an array to a function, we just have to specify the array type, followed by an array name and square brackets in the function parameters.

```cpp
ReturnType FunctionName (int ArrayName[])
{
  // Function Body
}

int main ()
{
  // Function body
  FunctionName(ArrayName)
}
```

By default, arrays are passed by reference!

### Two-Dimensional Array

A two-dimensional array is an array of arrays. It represents a matrix. We can access the elements in a two-dimensional array by the rows and columns index.

```cpp
DataType ArrayName [RowSize][ColumnSize] ;
```

#### Initialization of a two-dimensional array

```cpp
DataType ArrayName [][] = {{value1, ..., N}, ..., {value1, ..., N}};
```

If we initialize an array with elements fewer than its total size, it automatically initializes the remaining elements with their default values.

When initializing a 2-D array, specifying the first dimensional is optional. The compiler will infer the number of rows from the statement.

If we aren't initializing a 2-D array, all of its dimensions must be specified.

## Pointers

A computer's memory can be thought of as an array of bytes.

The number that uniquely identifies the location in the memory is known as the memory address.

### Address of a Variable

During the compilation time, the compiler maps each variable name to the unique memory address in the memory. Our machine accesses and modifies all the data by their addresses in the computer’s memory. But why use an identifier when we can access our data using the memory address?

Identifiers have to be used because we have to declare multiple variables in a single program, so it must be difficult for the human to remember all the addresses. Therefore, we use identifiers to keep things simple.

### Address-of operator

The address-of operator (\&) is a unary operator. It is used to extract the memory address of the variable.

The memory address depends upon your machine. Therefore, if you run the same program on a different machine, you will get a different memory address.

### Concept of pointer

In C++, a pointer is a variable that stores the address of another variable.

### Pointer declaration

To declare a variable as a pointer, its identifier must be preceded by an asterisk \*. When we use \* before the identifier, it indicates that the variable beign declared is a pointer.

```cpp
DataType *identifier;
```

```cpp
#include <iostream>

using namespace std;

int main() {
  // Declares a pointer variable John
  int *John = nullptr;
  return 0;
}
```

This declares a pointer `John`, and its sole purpose is to store the address of some other variable. Here, `John` only points to the value whose data type is `int`. Therefore, we can say that John is a pointer to `int`.

It's considered a best practice to set a pointer to `nullptr` when it is declared, unless it is initialized to some valid address.

It's a good practice to use ptr in a pointer's variable name. It indicates that a variable is a pointer, and must be handled differently.

If we declare multiple pointers in the same line, we must use an asterisk before each identifier.

### Pointer Initialization

```cpp
ptrVariable = &Variable;
```

If we don't initialize a pointer, it is automatically initialized to 0.

### Dereferencing Operator
