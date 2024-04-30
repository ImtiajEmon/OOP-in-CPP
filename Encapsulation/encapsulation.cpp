#include<bits/stdc++.h>
using namespace std;


// Simple class 
class Student{
    private:
        int mark = 0;

    public:             // Access specifier
        string Name;
        string Department;
        int Id;

        // Constructor method will be the same name as the class, followed by parentheses ()
        Student(string name, string dept, int id){
            Name = name;
            Department = dept;
            Id = id;
        }

        // Method/function defined inside the class
        void show_details(){
            cout<<"Name: "<<Name<<endl;
            cout<<"Department: "<<Department<<endl;
            cout<<"ID: "<<Id<<endl;
        }

        // To update the mark
        void set(int m){
            mark = m;
        }

        // To Access the mark
        int get(){
            return mark;
        }
};

int main()
{   
    Student s1("Jason", "CSE", 19201031);  // Creating an instance of Student class called s1
    s1.show_details();

    // geter, seter method
    s1.set(95);
    cout<<"Mark: "<<s1.get()<<endl;

    return 0;
}
