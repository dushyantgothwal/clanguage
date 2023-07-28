#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%100;
		sum=sum+r;
		n=n/100;
	}
	printf("Sum of Digits: %d",sum);
	
	return 0;
}
