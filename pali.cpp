#include<iostream>
using namespace std;
class pali
	{
	int r=0,s=0,t=0;
	public:
	void pallin(int n)
	{
	t=n;
	while(n!=0)
		{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
		}
	if(t==s)
	{
	cout<<"number is pallindrome";
	}
	else
	{
	cout<<"number is not pallindrome";
	}
	}
	};
int main()
{
pali p;
int x;
cout<<"enter number";
cin>>x;
p.pallin(x);
}
