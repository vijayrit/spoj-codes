#include<iostream>
using namespace std;
int revnum(int x)
{
	int rev=0;
	while(x!=0)
	{
		rev=rev*10+(x%10);
		x=x/10;
	}
	return rev;
}
int main()
{
	int c;
	cin>>c;
	for(int i=1;i<=c;i++)
	{
		int sum;
		int num1,num2;
		cin>>num1;
		cin>>num2;
		num1=revnum(num1);
		num2=revnum(num2);
		sum=num1+num2;
		sum=revnum(sum);
		int x=sum;
		cout<<x<<endl;
	}
}
