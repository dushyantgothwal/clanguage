#include<stdio.h> 
int main()
{
	int eng,math,comp,hindi,phy,total;
	float avg;
	printf("Enter marks of 5 subject:");
	scanf("%d%d%d%d%d",&eng,&math,&comp,&hindi,&phy);
	total=phy+comp+math+hindi+eng;
	{
		printf("Total marks: %d\n",total);
		
	 } 
	 {
	 	avg=total/5.0;
	 	printf("Average marks: %lf",avg);
	 }
	 return 0;
}
