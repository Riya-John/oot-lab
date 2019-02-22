#include<iostream>
using namespace std;
class fib
	{
	int lim;
	public:
	void fibs(int lim)
	{
	int a=0,b=1,c,i;
	cout<<a<<b;
	for(i=0;i<lim;i++)
	{
	c=a+b;
	a=b,b=c;
	cout<<c;
	}
	}
	};
int main()
{
fib p;
int x;
cout<<"enter limit:";
cin>>x;
p.fibs(x);
return 0;
}	
