#include<iostream>
using namespace std;

class College{
	protected:
		string collegeName;
	public:
	College()
	{
		collegeName="TIET";
		cout<<"collegeName constructor called"<<endl;
		}	
		
};

class Department : public College
{
	private:
		string departmentName;
	public:
	Department()
	{
		departmentName= "Computer science";
		cout<<"Department constructor called"<<endl;
		}	
		
		void display()
		{
			cout<<"----College Details------"<<endl;
			cout<<"college"<<collegeName<<endl;
			cout<<"Department"<<departmentName<<endl;
			
		}
};


int main()
{
	Department d;
	d.display();
	
	return 0;
}
