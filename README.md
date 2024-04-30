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


<br />
<br />


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


<br />
<br />

## ⫸ Methods
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:
  1. Inside class definition
  2. Outside class definition

> ****Inside class definition:**** Declare & define the method inside the class
```
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};
```
➤ [Inside class definition](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Methods/inside_class_definition.cpp) 

<br />

> ****Outside class definition:**** Should declare the mothod inside the class but define the method outside the class
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


<br />
<br />


## ⫸ Variables

1) ****Instance Variable:**** Instance variables are owned by instances of the class. This means that for each object or instance of a class, the instance variables are different. Unlike class variables, instance variables are defined within methods.

2) ****Static or Class Variable:**** This is not a property of objects or instances it's a property of class. But this type of variable also accessible from objects.

```
class Player{
    public:
        int run = 0;       // Instance Variable
        static int total_run;  // Class or Static Variable. It should be declared not assigned int the class

        void hit4(){
            run += 4;
            total_run += 4;
        }

        void hit6(){
            run += 6;
            total_run += 6;
        }
};


// Class or Static variable have to assigned outside the class unless it's a const
int Player :: total_run = 0;
```
➤ [Use of different types of variables](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Variables/variables.cpp)


<br />
<br />


## ⫸ Access Specifiers
Access specifiers define how the members (attributes and methods) of a class can be accessed.

In C++, there are three access specifiers:
  public - Members are accessible from outside the class
  private - Members cannot be accessed (or viewed) from outside the class
  protected - Members cannot be accessed from outside the class. However, they can be accessed in inherited classes.



<br />
<br />


## ⫸ Encapsulation
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, we must declare class variables/attributes as private (cannot be accessed from outside the class). If we want others to read or modify the value of a private member, we can provide public **get** and **set** methods.

➤ [Encapsulation](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Encapsulation/encapsulation.cpp)



<br />
<br />


## ⫸ Inheritance
Types of inheritance:

1. ****Simple Inheritance:**** When there is one base/super/parent class and one derived class. <br />
   ➤ [Simple Inheritance](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Inheritance/simple_inheritance.cpp)

3. ****Multiple Inheritance:**** When a class is derived more than one base classes. <br />
   ➤ [Multiple Inheritance](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Inheritance/multiple_inheritance.cpp)

5. ****Multilevel Inheritance:**** When a derived class is being inheritated from another derived class. <br />
   ➤ [Multilevel Inheritance](https://github.com/ImtiajEmon/OOP-in-CPP/blob/main/Inheritance/multilevel_inheritance.cpp)
