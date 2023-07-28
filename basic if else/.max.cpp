#include<stdio.h>
int main()
{
	
	int a=10,b=30,c=20;
	printf("enter the value of a and b and c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is max");
		
	}
	else if(b>a && b>c)
	{
		printf("b is max");
		
	}
	else if("else" )
	{
		printf("c is max");
	}
	else{
		printf("the all value are equal");
	}
	
	
	return 0;
}
