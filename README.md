# OOP-in-CPP
---

## ⫸ Creating a Class
> A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

```
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
```
We can creat a class with constructor method as well as without constructor method.
If we use constructor method then the constructor method name should be same as class name.

➤ [Class Without Constructor](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Simple%20Class/class_without_constructor.cpp) 

➤ [Class With Constructor](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Simple%20Class/class_with_constructor.cpp)


## ⫸ Creating an Object
> When the constructor is not perametarized 
```
// CLASS_NAME OBJECT_NAME
Student student1;
```
> When the constructor is perametarized 
```
// CLASS_NAME OBJECT_NAME(ARG1, ARG2...)
Student student1("Jason", "CSE");
```


## ⫸ Methods
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:
  1. Inside class definition
  2. Outside class definition

> **Inside class definition:** Declare & define the method inside the class
```
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};
```
➤ [Inside class definition](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Methods/inside_class_definition.cpp) 



> **Outside class definition:** Should declare the mothod inside the class but define the method outside the class
```
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}
```
➤ [Outside class definition](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Methods/outside_class_definition.cpp) 



