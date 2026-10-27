#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void display(int a)
    {
        cout << "Integer: " << a << endl;
    }

    void display(double a)
    {
        cout << "Double: " << a << endl;
    }

    void display(string a)
    {
        cout << "String: " << a << endl;
    }
};

int main()
{
    Print p;

    p.display(10);
    p.display(25.75);
    p.display("Hello World");

    return 0;
}
