#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Initialize complex number
    void set(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    // Display complex number
    void display()
    {
        if(imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }

    // Add two complex numbers
    Complex sum(Complex c)
    {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.set(5, 3);
    c2.set(4, 2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1.sum(c2);

    cout << "Sum: ";
    c3.display();

    return 0;
}
