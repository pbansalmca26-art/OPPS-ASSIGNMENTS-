#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    // Default Constructor
    Student()
    {
        name = "Pavansh";
        rollNo = 101;
    }

    // Display function
    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}
