#include<bits/stdc++.h>
using namespace std;


// Simple class 
class Student{
    public:                     // Access specifier
        string Name;
        string Department;
        int Id;

        // Constructor method will be the same name as the class, followed by parentheses ()
        Student(string name, string dept, int id){
            Name = name;
            Department = dept;
            Id = id;
        }
};

int main()
{   
    Student s1("Jason", "CSE", 19201031);  // Creating an instance of Student class called s1


    // Print the info of s1
    cout<<"Name: "<<s1.Name<<endl;
    cout<<"Department: "<<s1.Department<<endl;
    cout<<"ID: "<<s1.Id<<endl;

    return 0;
}


