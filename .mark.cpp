#include<stdio.h>
int main ()
{
	int m, e ,s ,h ,c;
	int mark = 44;
	int result;
	float avg;
	printf("enter the mark = ");
	scanf("%d %d %d %d %d" , &m, &e, &s, &h, &c);
	if(m >mark && e>mark && s>mark && h>mark && c>mark) {
		result = m+e+s+h+c;
		avg  = result / 5;
		printf("the average of this is = %f " ,avg );
	}
	else{
		printf ("you are failed");
	}
	return 0;
}
