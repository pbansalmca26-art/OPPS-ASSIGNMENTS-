#include <iostream>
using namespace std;

class Result
{
public:
    void result(int marks)
    {
        cout << "Marks in one subject: "
             << marks << endl;
    }

    double result(double m1, double m2)
    {
        return (m1 + m2) / 2.0;
    }

    double result(double m1, double m2, double m3)
    {
        return (m1 + m2 + m3) / 3.0;
    }
};

int main()
{
    Result r;

    r.result(85);

    cout << "Average of two subjects: "
         << r.result(80.0, 90.0) << endl;

    cout << "Average of three subjects: "
         << r.result(80.0, 90.0, 70.0) << endl;

    return 0;
}
