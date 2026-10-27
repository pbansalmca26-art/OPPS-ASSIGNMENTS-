#include <iostream>
using namespace std;

class Area
{
public:
    void calculate(double side)
    {
        cout << "Area of Square: "
             << side * side << endl;
    }

    void calculate(double length, double breadth)
    {
        cout << "Area of Rectangle: "
             << length * breadth << endl;
    }

    void calculate(int radius)
    {
        cout << "Area of Circle: "
             << 3.14159 * radius * radius << endl;
    }
};

int main()
{
    Area a;

    a.calculate(5.0);        
    a.calculate(4.0, 6.0);   
    a.calculate(7);          

    return 0;
}
