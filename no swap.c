#include<stdio.h>
int main()
{
	int a=67;
	int b=56;
	int c;printf("the value of a is  %d\n",a);
	printf("the real value of b is :%d\n",b);
	c=a;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swap value of a is :%d\n",a);
	printf("the swap value of b is:%d",b);
	
	
	
	return 0;
}
