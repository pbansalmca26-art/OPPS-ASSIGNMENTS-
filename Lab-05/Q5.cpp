#include <iostream>
using namespace std;

class Maximum
{
public:
    int findMax(int a, int b)
    {
        return (a > b) ? a : b;
    }

    int findMax(int a, int b, int c)
    {
        int max = a;

        if (b > max)
            max = b;

        if (c > max)
            max = c;

        return max;
    }

    double findMax(double a, double b)
    {
        return (a > b) ? a : b;
    }
};

int main()
{
    Maximum m;

    cout << "Maximum of two integers: "
         << m.findMax(10, 20) << endl;

    cout << "Maximum of three integers: "
         << m.findMax(10, 50, 30) << endl;

    cout << "Maximum of two decimal numbers: "
         << m.findMax(12.5, 15.8) << endl;

    return 0;
}
