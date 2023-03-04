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