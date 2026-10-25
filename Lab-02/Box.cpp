#include<iostream>
using namespace std;
class Box{
	private:
		float length;
		float width;
		float hieght;
	private:
	Box()
	{
		length=1;
		width=1;
		hieght=1;
		}
	public:	
	Box( float l, float w, float h)
	{
		length=	l;
		width= w;
		hieght =h;
				
	}	
	
	void display()
	{
		float volume= length*width*hieght;
		
		cout<<"length :"<<length<<endl;
		cout<<"width :"<<width<<endl;
		cout<<"hieght :"<<hieght<<endl;
		cout<<"Area :"<<volume<<endl;
		}	
};

int main()
{
	Box b(10, 20, 30);
	b.display();
	return 0;
}
