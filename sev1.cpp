#include<iostream>
using namespace std;
class polygon
	{
	public:
	int a,b;
	void read()
	{
	cout<<"enter a and b:";
	cin>>a>>b;
	}
	virtual float area()
	{
	cout<<"the area's of different polygon";
	}
	
	};
class triangle :public polygon
	{
	public:
	virtual float area()
	{
	return 0.5*a*b;
	}
	};
class rectangle:public polygon
	{
	public:
	virtual float area()
	{
	return a*b;
	}
	};
int main()
{
polygon *p;
float ar;
int g;
cout<<"\n1.to find area of a triangle\n2.to find area of a rectangle\nenter your choice:";
cin>>g;
switch(g)
{
case 1:
{
	triangle t;
	t.read();
	p=&t;
	ar=p->area();
	cout<<"the area of triangle is:"<<ar;
	break;
}
case 2:
{
	rectangle r;
	r.read();
	p=&r;
	ar=p->area();
	cout<<"the arae of rectangle is:"<<ar;
	break;
}
deflaut:
{
	cout<<"wrong choice";
}
}
}


	

