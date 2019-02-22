#include<iostream>
using namespace std;
class even
	{
	int n;
	public:
	void evennum(int n)
	{
	if(n%2==0)
		{
		cout<<"number is even";
		}
		else
		{
		cout<<"number is odd";
		}
	}
	};
int main()
{
even r;
int x;
cout<<"enter the number:";
cin>>x;
r.evennum(x);
}
