#include<iostream>
using namespace std;
class Number{
	private:
		int a;
		int b;
	public:
	Number(int x, int y)
	{
		a= x;
		b=y;
		}	
	friend void calculatesum(Number n);	
};

void calculatesum(Number n)
{
	int sum= n.a+n.b;
	cout<<"Enter a"<<n.a<<endl;
	cout<<"Enter b"<<n.b<<endl;
	cout<<"Sum :"<<sum<<endl;
	
	
}

int main()
{
	Number n(10,20);
	calculatesum(n);
	
	return 0;
}
