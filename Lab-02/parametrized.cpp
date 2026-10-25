#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length;
		float breadth;
	public:
	Rectangle(float l , float b)
	{
		length = l;
		breadth = b;
		
	}
	
	void dispaly()
	{
		float area = length * breadth;
		cout<<"length"<<length<<endl;
		cout<<"breadth"<<breadth<<endl;
		cout<<"Area"<< area<<endl;
	}
		
};

int main()
{
	Rectangle r(10,20);
	r.dispaly();
	
	return 0;
}
