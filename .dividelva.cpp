#include<stdio.h>
int main()
{
	
int a;
printf("enter the number a");
scanf("%d",&a);
if(a&7==0 || a%11==0)
{
	printf("divisival ");
}
else{
	printf("not");
}
return 0;
}
