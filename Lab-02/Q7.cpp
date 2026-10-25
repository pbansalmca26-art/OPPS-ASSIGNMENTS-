#include<iostream>
using namespace std;
class Demo{
	public:
		Demo()
		{
			cout<<"constructor called"<<endl;
		}
		
		~Demo()
		{
			cout<<"destructor called"<<endl;
			
		}
};

int main()
{
	Demo obj1;
	Demo obj2;
	Demo obj3;
	
	
	cout<<"inside main ()"<<endl;
	
	return 0;
}
