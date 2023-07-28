#include<stdio.h>
int show(int a, int b, int c);
int main()
{
	int result=show(12,8);
	printf("%d",result);
	return 0;
		
}

int show(int a, int b, int c)
{
	
	int d;
	d=a+b+c;
	return d;
}

