# Notes

## Classes and Objects

In C++, we have different data types, like `int`, `string`, `bool`, etc. An object can be created out of any of those types. An object is an instance of a class. Object-oriented programming wouldn't make sense if we couldn't make our own custom objects. This is where classes come into play.

Classes are used to create user-defined data types. For example, a car class would contain:

- Data Members
  - TopSpeed
  - NumberOfSeats
  - FuelCapacity
  - Manufacturer
- Member Functions
  - Refuel()
  - Drive()
  - Park()

Data members are also known as the member variables of a class. They contain the information relevant to the object of the class.

Member functions enable the class object to perform operations using the member variables.

### Class Definition

Similar to functions, classes need to be created outside `main()`. The written code of a clsas and its attributes are known as the definition or implementation of the class.

```cpp
class className
{
    // All member variables and member functions

}; // The semi-colon operator ends the class
```

To create a class object:

```cpp
class className {
  ...
};

int main() {
  int i; // integer object
  className c; // className object
}
```

### Access Modifiers

#### Private

A private member cannot be accessed directly from outside the class. It is a popular practice to keep the data members private since we do not want anyone manipulating our data directly. By default, all declared members are private in C++.

```cpp
class Class1 {
  int num; // This is, by default, a private data member
  ...
};

class Class2 {
  private: // We have explicitly defined that the variable is private
  int num;
  ...
};
```

#### Public

This tag indicates that the members can be directly accessed by anything which is in the same scope as the class object.

Member functions are usually public as they provide the interface through which the application can communicate with our private members.

Public members must be declared using the public: heading.

```cpp
class myClass {
  int num; // Private variable
  
  public: // Attributes in this list are public
  void setNum(){
    // The private variable is directly accessible over here!
  }
};
```

Public members of a class can be accessed by a class object using the . operator. For example, if we have an object c of type myClass, we could access setNum() like this:

```cpp
myClass c; // Object created
c.setNum(); // Can manipulate the value of num
c.num = 20; // This would cause an error since num is private
```

#### Protected

The protected category is unique. The access level to the protected members lies somewhere between private and public. The primary use of the protected tag is to implement inheritance, which is the process of creating classes out of classes.

### Class Data Members

We can choose any of the in-built types such as `int`, `double`, etc. Arrays, vectors, and pointers can also be used. Here's an example of a Student class and its data members:

```cpp
#include<iostream>
using namespace std;

class myClass {
  // All private members
  string name;
  int age;
  string *address;
  char grades [10]; // A student can have a maximum of 10 grades
};
```

#### Class Data Member Initialization

Class data members can be initialized in the class declaration.

```cpp
#include <iostream>
#define PI 3.1416
using namespace std;

class Circle {
  private: 
    string mod = "debug";
    // int arr[] = {1, 2, 3, 4, 5};
    int radius = 1;
  
  public:
    void setRadius(int r) {
      if ( r >= 0 ) {
        radius = r;
      }
    }

    int getRadius() {
      return radius;
    }

    double getArea() {
      return PI * radius * radius;
    }
};

int main() {
  Circle c;
  cout << "The area of a circle of radius " << c.getRadius() << " is " << c.getArea() << endl;
  return 0;
}
```

Array members can't be initialized in classes.

### Class Member Functions

Member functions define the behaviour of the class. They can either alter the content of the data variables or use their values to perform a certain computation. Typically, they are declared as public.

#### Member function declaration and definition

Like all functions, member functions can either be defined straightaway, or they could be declared first and defined later.

```cpp
class Rectangle {
  int length;
  int width;

  public:
  void setLength(int l){ // This function changes the value of length
    length = l;
  }
  
  int area(){
    return length * width; // Only the values of the data members are
                           // accessed and used to calculate the area
  }
};
```

#### Scope resolution operator

The scope resolution operator (`::`) allows us to simply declare the member functions in the class and define them elsewhere in the code, using the following syntax:

```cpp
returnType className::function()
```

```c++
class Rectangle {
  int length;
  int width;

  public:
  
  // We only write the declaration here
  void setLength(int l);
  int area();
};

// Somewhere else in the code
void Rectangle::setLength(int l){ // Using the scope resolution operator
  length = l;
}

int Rectangle::area(){
  return length * width; 
}
```

#### Get and Set functions

These two types of functions are very popular in OOP. A `get` function retrieves the value of a particular data member, whereas a `set` function sets its value.

### Constructors

As the name suggests, the constructor is used to construct the object of a class. It is a special member function that outlines the steps that are performed when an instance of a class is created in the program.

A construct's name must be exactly the same as the name of its class. It is a special function and it is a good practice to declare/define it as the first member function.

#### Default constructor

In a default constructor, we define the default values for the data members of the class. Hence, the constructor creates an object in which the data members are initialized to their default values.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Date {
  int day;
  int month;
  int year;

  public:
  // Default constructor
  Date(){
    // We must define the default values for day, month, and year
    day = 0;
    month = 0;
    year = 0;
  }

  // A simple print function
  void printDate(){ 
    cout << "Date: " << day << "/" << month << "/" << year << endl;
  }
};

int main(){
  // Call the Date constructor to create its object;
  
  Date d; // Object created with default values!
  d.printDate();
}
```

#### Parameterized constructor

In a parameterized constructor, we pass arguments to the constructor and set them as the values of our data members.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Date {
  int day;
  int month;
  int year;

  public:
  // Default constructor
  Date(){
    // We must define the default values for day, month, and year
    day = 0;
    month = 0;
    year = 0;
  }
  
  // Parameterized constructor
  Date(int d, int m, int y){
    // The arguments are used as values
    day = d;
    month = m;
    year = y;
  }

  // A simple print function
  void printDate(){ 
    cout << "Date: " << day << "/" << month << "/" << year << endl;
  }
};

int main(){
  // Call the Date constructor to create its object;
  
  Date d(1, 8, 2018); // Object created with specified values!
  d.printDate();
}
```

#### `this` Pointer

The `this` pointer points to the calling object itself. We can use `this` pointer to access a data member of the calling object. The expression `this->memberName` specifies that we are accesing the memberName.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Date {
  int day;
  int month;
  int year;

  public:
  // Default constructor
  Date(){
    // We must define the default values for day, month, and year
    day = 0;
    month = 0;
    year = 0;
  }
  
  // Parameterized constructor
  Date(int day, int month, int year){
    // Using this pointer
    this->day = day;
    this->month = month;
    this->year = year;
  }

  // A simple print function
  void printDate(){ 
    cout << "Date: " << day << "/" << month << "/" << year << endl;
  }
};

int main(){
  // Call the Date constructor to create its object;
  
  Date d(1, 8, 2018); // Object created with specified values!
  d.printDate();
}
```

#### Copy constructors

The copy constructor allows a class to create an object by copying an existing object. They expect a constant reference to another instance of the class as their argument.

```cpp
class Account
{
  public:
    Account(const Account& other);
};
```

#### Move constructors

The move constructor allows the data of one object to be transferred completely to another object. They expect a non-constant rvalue-reference to an instance of the class as their argument.

```cpp
class Account{ public:
      Account(Account&& other);
};
```

#### Explicit constructors

The explicit constructor is used to avoid implicit calls to a class’s constructor.

Consider the following `Account` constructor:

```cpp
public:
    Account(double b): balance(b){}
private:
    double balance;
    std::string cur;
};
```

An instance can be created like this: `Account acc = 100.0;`

A double is beign assigned to an Account object, but the compiler implicitly calls the constructor that takes a double as an argument. Hence, the operation works without any errors.

If the constructor had been made explicit, this statement would not have worked. For this, we would have to use the explicit keyword.

```cpp
class Account{
public:
    explicit Account(double b): balance(b){}
    Account (double b, std::string c): balance(b), cur(c){} 
private:
    double balance;
    std::string cur;
};
Account account = 100.0; // ERROR: implicit conversion
Account account(100.0); // OK: explicit invocation
Account account = {100.0,"EUR"}; // OK: implicit conversion
```

### Member initializer lists

Member initializer list allows us to initialize data members of an object without writing assignment statements in a constructor.

```cpp
#include <iostream>
#define PI 3.1416
using namespace std;

class Sphere {
  private: 
    const double density;
    double radius;
  public:
    Sphere(double r) : radius(r), density(4.3) {
      // The following initialization wouldn't work, because density is a const
      // density =  4.3;
    }
    double volume() {
      return 4 * PI * radius * radius * radius / 3;
    }
    double mass() {
      return density * volume();
    }
};
int main() {
  // your code goes here
  Sphere s(3.2);
  cout << "Volume: " << s.volume() << ", mass: " << s.mass();
  return 0;
}
```

### Constructor Delegation

Constructor delegation is when one constructor of a class invokes another constructor of the same class.

```cpp
#include <iostream>
using namespace std;

class Collector {
  private:
    int size;
    int capacity;
    int* list;

  public:
    Collector() : Collector(0) {}
    Collector(int cap) : capacity(cap), size(0)  {
      if (cap > 0) {
        list = new int[cap];
      }
      else
        capacity = 0;
    }

    bool append(int v) {
      if (size < capacity) {
        list [ size++ ] = v;
        return true;
      }
      else
        return false;
    }

    ~Collector() {
      if (size > 0) {
        delete[] list;
      }
    }
};

int main() {
  // A useless Collector object of 0 capacity
  Collector c1;
  // Another Collector object, this time with a capacity of 10
  Collector c2(10);

  for(int i = 0 ; i < 15 ; i++) {
    cout << c2.append(i) << endl;
  }

  return 0;
}
```

### Destructors

A destructor is the opposite of a constructor. It is called when the object of a class is no longer in use. The object is destroyed and the memory it occupied is now free for future use.

A class destructor can be created in a similar way to the constructor, except that the destructor is preceded by the `~` keyword.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Collector {
  int * list;
  int size;
  int capacity;

  public:
  // Default constructor
  Collector(){
    // We must define the default values for the data members
    list = nullptr;
    size = 0;
    capacity = 0;
  }
  
  // Parameterized constructor
  Collector(int cap){
    // The arguments are used as values
    capacity = cap;
    size = 0;
    list = new int[capacity];
  }

  bool append(int v){
    if (size < capacity) {
      list [ size++ ] = v;
      return true;
    }
    return false;
  }

  // A simple print function
  void dump(){ 
    for(int i = 0 ; i < size ; i++) {
      cout << list[i] << " ";
    }
    cout << endl;
  }
  
  ~Collector(){
    cout << "Deleting the object " << endl;
    if (capacity > 0)
      delete[] list; 
  }
};

int main(){  
  Collector c(10); 
  for (int i = 0 ; i < 15 ; i++){
    cout << c.append(i) << endl;
  }
}
```

#### Destructors and Pointers

In the case of object pointers, destructors are called when we issue the `delete` command.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Collector {
  int * list;
  int size;
  int capacity;

  public:
  // Default constructor
  Collector(){
    // We must define the default values for the data members
    list = nullptr;
    size = 0;
    capacity = 0;
  }
  
  // Parameterized constructor
  Collector(int cap){
    // The arguments are used as values
    capacity = cap;
    size = 0;
    list = new int[capacity];
  }

  bool append(int v){
    if (size < capacity) {
      list [ size++ ] = v;
      return true;
    }
    return false;
  }

  // A simple print function
  void dump(){ 
    for(int i = 0 ; i < size ; i++) {
      cout << list[i] << " ";
    }
    cout << endl;
  }
  
  ~Collector(){
    cout << "Deleting the object " << endl;
    if (capacity > 0)
      delete[] list; 
  }
};

int main(){  
  Collector *c;
  c = new Collector(10); 
  for (int i = 0 ; i < 15 ; i++){
    cout << c->append(i) << endl;
  }
  delete c;
  cout << "Exiting program" << endl;
}
```

### Request and Suppress Methods

Since C++11, there has been a list of special methods that the compiler can generate implicitly if we have not defined them:

- Default constructors and destructors.

- Copy/move constructors and copy/move assignment operators.

- new and delete operators for objects and C arrays of objects.

- The default and delete keywords can be used to guide the creation or suppression of these special methods.

- default can only be assigned to special methods that do not have any default arguments. Hence, it wouldn’t work with something like an ordinary class method or a parameterized constructor.

Let’s suppose we have a parameterized constructor for our Account class but no default constructor. The compiler can easily generate it for us. All we need to do is assign default to the default constructor.

```cpp
...
Account() = default;
Account (double balance){this->balance = balance;}
...
```