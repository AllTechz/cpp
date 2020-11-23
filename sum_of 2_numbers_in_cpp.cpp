#include<iostream>
int add(int,int);
int main()
{
	using namespace std;
	int a,b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Sum = "<<add(a,b);
}
int add(int x,int y)
{
	return(x+y);
}
