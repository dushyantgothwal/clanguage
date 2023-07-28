#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=c)
	{
		
	  if(a>=b)
	
		printf("%d is the largest number",a);
		else 
		printf("%d is the largest number",c);
		
	}
	else
	{
	
		if(b>=c)
		printf("%d is the larget number",b);
		else
			printf("%d is the larget number",c);
	}
	
return 0;	
}
