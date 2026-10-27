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

    Number operator-(Number n)
    {
        return Number(value - n.value);
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Number n1(30), n2(10), result(0);

    result = n1 + n2;
    cout << "Addition = ";
    result.display();

    result = n1 - n2;
    cout << "Subtraction = ";
    result.display();

    return 0;
}
