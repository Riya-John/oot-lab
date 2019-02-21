#include<stdio.h>
int main()
{
	int s=0,n,rev,r;
	printf("enter the number:");
	scanf("%d",&n);
	rev=n;
	while(n>0)
	{
	r=n%10;
	s=(s*10)+r;
	n=n/10;
	}
	if(rev==s)
	{
	printf(" number is pallindrome %d",s);
	}
	else
	{	
	printf("number is not pallindrome %d",s);
	}
}
