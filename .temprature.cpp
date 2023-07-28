#include<stdio.h>
int main()
{
	int t;
	char a;
	int f,c;
	printf("enter the temprature");
	scanf("%d %c",&t,&a);
	if(a=='c')
	{
		a=t*(9.0/5.0)+32;
		printf("temprature is farhenite: %",a);
		
	}
	else if(a=='f')
	{
		a=5.0/9.0*(t-32);
		printf("temprature in celsius: %d",a);
	}
	else
	{
		printf("nope");
	}
	return 0;
}
