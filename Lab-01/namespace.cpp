#include <iostream>
using namespace std;

namespace First
{
    int number = 10;

    void display()
    {
        cout << "First Namespace" << endl;
        cout << "Number = " << number << endl;
    }
}

namespace Second
{
    int number = 20;

    void display()
    {
        cout << "Second Namespace" << endl;
        cout << "Number = " << number << endl;
    }
}

int main()
{
    First::display();
    cout << endl;

    Second::display();

    cout << "\nFirst number = " << First::number << endl;
    cout << "Second number = " << Second::number << endl;

    return 0;
}



