#include <iostream>
using namespace std;

class Student
{
    double CGPA;

public:
    Student(double c)
    {
        CGPA = c;
    }

    bool operator==(Student s)
    {
        return CGPA == s.CGPA;
    }

    bool operator>(Student s)
    {
        return CGPA > s.CGPA;
    }

    void display()
    {
        cout << CGPA << endl;
    }
};

int main()
{
    Student s1(8.5);
    Student s2(9.2);

    cout << "Student 1 CGPA = ";
    s1.display();

    cout << "Student 2 CGPA = ";
    s2.display();

    if (s1 == s2)
        cout << "Both students have the same CGPA." << endl;
    else
        cout << "Both students have different CGPA." << endl;

    if (s1 > s2)
        cout << "Student 1 has higher CGPA." << endl;
    else if (s2 > s1)
        cout << "Student 2 has higher CGPA." << endl;
    else
        cout << "Both students have equal CGPA." << endl;

    return 0;
}
