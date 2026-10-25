#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string Name, degree, hostel;
	int roll_no;
	float cgpa;
	void adddetails()
	{
	
	cout<<"Enter name"<<endl;
	cin>>Name;
	
	cout<<"Enter roll_no:"<<endl;
	cin>>roll_no;
	
	cout<<"Enter degree:"<<endl;
	cin>>degree;
	
	cout<<"enter hostel:"<<endl;
	cin>>hostel;
	
	cout<<"cgpa"<<endl;
	cin>>cgpa;
	
	
     }

void updatedetails()
{
	cout<<"Enter new Name :";
	cin>>Name;
	
	cout<<"Enter new roll_no:";
	cin>>roll_no;
	
	cout<<"Enter new degree ";
	cin>>degree;
	
}


void updatecgpa()
{
	cout<<"Enter new cgpa :";
	cin>>cgpa;
}

void updatehostel()
{
	cout<<"Enter new hostel :";
	cin>>hostel;
}


void displaydetails()
{
	cout<<"---updated details----";
	cout<<"Name :"<< Name <<endl;
	cout<<"roll_no"<<roll_no<<endl;
	cout<<"degree"<<degree<<endl;
	cout<<"cgpa"<<cgpa<<endl;
	cout<<"hostel"<<hostel<<endl;
	
}
};

int main()
{
	Student s;
	s.adddetails();
	
	cout<<"orignal details:";
	s.displaydetails();
	s.updatecgpa();
	s.updatedetails();
	s.updatehostel();
	
	cout<<"update details :";
	s.displaydetails();
	
	return 0;
}
