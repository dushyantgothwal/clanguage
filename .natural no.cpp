#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	printf("Sum of N Natural Number: %d",sum);
	
	return 0;
}
