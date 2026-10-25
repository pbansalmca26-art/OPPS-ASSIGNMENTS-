#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		int id;
		int salary;
		
	public:
	Employee(string n, int i, int s)
	{
		name= n;
		id= i;
		salary= s;
		}
		
	void display()
	{
	cout<<"Employee name"<<name<<endl;
	cout<<"Id"<<id<<endl;
	cout<<"salary"<<salary<<endl;
	
		
	}		
};

int main()
{
	Employee e("Pavansh", 101, 50000);
	e.display();
	
	return 0;
}

