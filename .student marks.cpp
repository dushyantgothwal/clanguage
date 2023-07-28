#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
struct student s[5];

printf("Enter student record\n\n");


for(i=0;i<5;i++)
{
	printf("Enter sroll:");
	scanf("%d",&s[i].roll)
	printf("Enter sname:");
	scanf("%s",&s[i].name)
	printf("Enter smarks:");
	scanf("%f",&s[i].marks)
}


printf("student record\n\n");


for(i=0;i<5;i++)
{
	printf(" sroll: %d\n",s[i].roll);
	
	printf("sname: %s\n",s[i].name);
	
	printf("smarks: %f\n",s[i].marks);
	
}
return 0;
}
