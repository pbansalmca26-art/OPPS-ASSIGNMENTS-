#include<iostream>
using namespace std;
class Demo{
	private:
		void privatefunction()
		{
			cout<<"this is private member function";
			
		}
	public:
	void publicfunction()
	{
		cout<<"this is public function";
		privatefunction();
		
    }
};

int main()
{
	Demo d;
	d.publicfunction();
}
	
