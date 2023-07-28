#include<stdio.h>

void add()
{
	int a=10,b=20,c;
	c=a+b;
	printf("add %d\n",c);
	
}
void sub()
{
	int a=20,b=10,c;
	c=a-b;
	printf(" sub %d\n",c);
	
}
void multi()
{
	int a=30,b=20,c;
	c=a*b;
	printf("multi %d\n",c);
	
}
void div()
{
	int a=40,b=20,c;
	c=a/b;
	printf("div %d\n",c);
	
}
int main()
{
	
	add();
	sub();
	multi();
	div();
	
	return 0;
}
