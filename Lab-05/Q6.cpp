#include <iostream>
using namespace std;

class Bill
{
public:
    // Bill for one item
    double calculateBill(int quantity, double price)
    {
        return quantity * price;
    }

    // Bill for two items
    double calculateBill(int q1, double p1,
                         int q2, double p2)
    {
        return (q1 * p1) + (q2 * p2);
    }

    // Bill after discount
    double calculateBill(double amount, int discount)
    {
        return amount - (amount * discount / 100.0);
    }
};

int main()
{
    Bill b;

    double bill1 = b.calculateBill(3, 100.0);
    cout << "Bill for one item: Rs. "
         << bill1 << endl;

    double bill2 = b.calculateBill(2, 100.0, 3, 50.0);
    cout << "Bill for two items: Rs. "
         << bill2 << endl;

    double finalBill = b.calculateBill(bill2, 10);
    cout << "Bill after 10% discount: Rs. "
         << finalBill << endl;

    return 0;
}
