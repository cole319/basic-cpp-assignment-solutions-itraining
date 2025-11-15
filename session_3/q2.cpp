
#include <iostream>
#include <string>
using namespace std;

class Student{
    string name;
    int rollNo;
    int marks;
    
    public:
    
    Student(string name, int rollNo, int marks):name(name), rollNo(rollNo), marks(marks){}
    
    void setStudentDetails(const string &name, int rollNo, int marks){
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


int main (){
    
   
    Student s1("Al Pacino", 1, 91);
    Student s2("Robert de Niro", 2, 93);
    Student s3("Daniel Day Lewis", 3, 100);
    Student s4("Irrfan Khan", 4, 94);

    s1.getStudentDetails();
    s1.setStudentDetails("Marlon Brando", 1, 99);
    s1.getStudentDetails();

    return 0;

}