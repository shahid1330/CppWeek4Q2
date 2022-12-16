#include<iostream>
using namespace std;
int fib(int x)
{
	if((x==1) || (x==0))
	{
		return(x);
	}
	else
	{
		return (fib(x-1)+fib(x-2));
	}
}
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int x,n,i=0;
	cout<<"Enter the number of terms of series=";
	cin>>x;
	cout<<"Fibonacci Series=";
	while(i<x)
	{
		cout<<" "<<fib(i);
		i++;
	}
	cout<<"\nEnter a positive number=";
	cin>>n;
	cout<<"Factorial of "<<n<<" = "<<fact(n);
	return 0;
}
