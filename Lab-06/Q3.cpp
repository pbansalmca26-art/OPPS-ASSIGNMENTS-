#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    Number operator+(Number n)
    {
        return Number(value + n.value);
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n1(10), n2(20), n3(0);

    n3 = n1 + n2;

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    cout << "Sum: ";
    n3.display();

    return 0;
}
