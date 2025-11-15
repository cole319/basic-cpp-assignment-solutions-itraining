
#include <iostream>
using namespace std;

class Student{
    string name;
    int rollNo;
    int marks;
    
    public:
    
    Student(string name, int rollNo, int marks){
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }
    
    void setStudentDetails(string name, int rollNo, int marks){
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }
    
    void getStudentDetails() const {
        cout << "Name: " << this->name << endl;
        cout << "Roll Number: " << this->rollNo << endl;
        cout << "Marks: " << this->marks << endl;
    }
};