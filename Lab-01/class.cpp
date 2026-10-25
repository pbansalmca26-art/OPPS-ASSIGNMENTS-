#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    // Private member function
    void showPrivateMessage()
    {
        cout << "\nThis is a private member function.";
    }

public:
    // Public member function
    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> Name;

        cout << "Enter Roll No: ";
        cin >> RollNo;

        cout << "Enter Degree: ";
        cin >> Degree;

        cout << "Enter Hostel: ";
        cin >> Hostel;

        cout << "Enter CGPA: ";
        cin >> CurrentCGPA;

        showPrivateMessage();   // Calling private function
    }

    // Public member function
    void updateCGPA()
    {
        cout << "\nEnter New CGPA: ";
        cin >> CurrentCGPA;
    }

    // Public member function
    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        cin >> Hostel;
    }

    void displayDetails()
    // Public member function
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name        : " << Name << endl;
        cout << "Roll No     : " << RollNo << endl;
        cout << "Degree      : " << Degree << endl;
        cout << "Hostel      : " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }
};

int main()
{
    Student s;

    s.addDetails();
    s.displayDetails();

    s.updateCGPA();
    s.updateHostel();

    cout << "\nUpdated Details:";
    s.displayDetails();

    return 0;
}
