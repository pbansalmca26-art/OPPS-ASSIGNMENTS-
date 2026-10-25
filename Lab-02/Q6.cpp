#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imaginary;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }

    // Display function
    void display()
    {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1;
    Complex c2(5, 3);

    cout << "Complex number using default constructor: ";
    c1.display();

    cout << "Complex number using parameterized constructor: ";
    c2.display();

    return 0;
}
