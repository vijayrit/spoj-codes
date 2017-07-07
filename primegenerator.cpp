#include<iostream>
using namespace std;
bool isPrime(int x)
{
	int l=0;
	for(int k=2;k*k<=x;k++)
	{
		if(x%k==0)
		{
			l=1;
			break;
		}
	}
	if(l==0)
	return true;
	else
	return false;
}
int main()
{
	int c;
	cin>>c;
	for(int i=1;i<=c;i++)
	{
		int num=0;
		int num1,num2;
		cin>>num1;
		cin>>num2;
		for(int j=num1;j<=num2;j++)
		if(isPrime(j)&&j!=1)
		cout<<j<<endl;
		cout<<"\n";
	}
}
