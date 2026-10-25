#include<iostream>
using namespace std;
class Student{
	private:
	string name;
	int roll_no;
	float cgpa;
	public:
		Student()
		{
			name="unknown";
			roll_no=0;
			cgpa=0.0;
		}
		
		Student(string n, int r )
		{
			name=n;
			roll_no=r;
		}
		
		Student(string n, int r, float c)
		{
			name=n;
			roll_no=r;
			cgpa=c;
		}
		
		void display()
		{
			cout<<"name"<<name<<endl;
			cout<<"roll_no"<<roll_no<<endl;
			cout<<"cgpa"<<cgpa<<endl;
		}
};

int main()
{
	Student s1;
	Student s2("Pavansh", 101,8.0);
	Student s3("Rahul", 102, 8.9);
	
	cout<<"Student 1"<<endl;
	s1.display();
	
	cout<<"Student 2"<<endl;
	s2.display();
	
	cout<<"Student 3"<<endl;
	s3.display();
	
	
	return 0;
	
	
}
