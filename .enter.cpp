#include<stdio.h>
int main()
{
	
	int a,b,c,d,e;
	printf("enter the value of a and b and c and d and e");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>b && a>c &&a>d &&a>e)
	{
		printf("a is max");
		
	}
	else if(a>b && b>c)
	{
		printf("b is max");
		
	}
	else if(c>a && c>b) 
	{
		printf("c is max");
	}
	
		else if(d>a && d>c)
	{
		printf("d is max");
		{	
			else if(e>a && e>d)
		}
	
		printf("e is max");
	else{
		printf("the all value are equal")
	}
	
	
	return 0;
}
