#include<stdio.h>
int main()
{
	int n,r,sum=0,m=1;
	printf("enter a decimal: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		n=n/2;
		sum=sum+(r*m);
		m=m*10;
	}
	printf("binary value is: %d",sum);
}
