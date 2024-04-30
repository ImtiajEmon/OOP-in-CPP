#include<bits/stdc++.h>
using namespace std;


// Simple class 
class Student{
    public:              // Access specifier
        string name;
        string department;
        int id;
};

int main()
{   
    Student s1;  // Creating an instance of Student class called s1
    s1.name = "Jason";
    s1.department = "CSE";
    s1.id = 19201031;


    // Print the info of s1
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Department: "<<s1.department<<endl;
    cout<<"ID: "<<s1.id<<endl;

    return 0;
}
