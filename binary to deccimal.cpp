#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0,m=1,r;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		r=n%10;
		n=n/10;
		sum=sum+r*(pow(2,i));
		m=m*2;
	}
	printf("decimal is: %d",sum);
}
