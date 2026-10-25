#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int marks;
	public:
	Student(string n, int m)
	{
		name=n;
		marks=m;
		}
		
	friend void display(Student s);		
};

void display(Student s)
{
	cout<<"enter student name:"<<s.name<<endl;
	cout<<"enter student marks: "<<s.marks<<endl;
	
}
int main()
{
	Student s("Pavansh", 100);
	display(s);
	
	return 0;
}
	
