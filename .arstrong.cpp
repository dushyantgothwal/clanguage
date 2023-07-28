#include<stdio.h>
int main()
{
	int num=151152,rem,sum=0;
	int temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num/=10;
	}
	if(temp == sum)
	{
		printf("Number is armstrong");
	}
	else{
		printf("Number is not armstrong");
	}
	return 0;
}
