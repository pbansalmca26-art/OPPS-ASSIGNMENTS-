#include<iostream>
using namespace std;
class Demo{
	
	private:
		int id;
	public:
	Demo( int i)
	{
		cout<<"constructor called "<<endl;
	}	
	
	~Demo()
	{
		cout<<"Destructor called"<<endl;
		
	}
};

void createobject()
{
	cout<<"Entring create object()"<<endl;
	
	Demo obj3(3);
	Demo obj4(4);
	cout << "Leaving createObjects()" << endl;
}
int main()
{
    cout << "Entering main()" << endl;

    Demo obj1(1);
    Demo obj2(2);

    createobject();

    cout << "\nBack in main()" << endl;

    return 0;
}
