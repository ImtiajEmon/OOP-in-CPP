#include<bits/stdc++.h>
using namespace std;


// Parent Class
class University{
    public:
        string uni_name = "Brac University";
        string location = "Dhaka";

        void admission(string student_name, string student_dept){
            cout<<"The admission of "<<student_name<<" in "<<student_dept<<" is done.\n";
        }
};




// parent Class
class Department{
    public:
        int get_id(string dept){
            if(dept == "CSE") return 19201031;
            else if (dept == "EEE") return 19301031;
            else return 19401031;
        }
};



//child class
class Student : public University, public Department{
    public:             // Access specifier
        string Name;
        string Department;

        // Constructor
        Student(string name, string dept){
            Name = name;
            Department = dept;
            admission(Name, Department);
        }

        void show_details(){
            cout<<"Name: "<<Name<<endl;
            cout<<"Department: "<<Department<<endl;
            cout<<"University name: "<<uni_name<<endl;
            cout<<"Id: "<<get_id(Department)<<endl;
        }
};



int main()
{   
    Student s1("Jason", "BBA");  // Creating an instance of Student class called s1

    s1.show_details();

    return 0;
}

