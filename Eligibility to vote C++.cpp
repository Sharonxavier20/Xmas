#include<iostream>
using namespace std;

int main()
{
	int age;

	cout<<"Enter your age: ";
	cin>>age;
	
	//condition to check voting eligility
	if(age>=18)
	{
		cout<<"Person is eligible for voting";
	}
	else
	{
		cout<<"Person is not eligible for voating";
	}

	return 0;
}

