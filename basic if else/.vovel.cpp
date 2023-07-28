#include<stdio.h>
int main()
{
	char cha;
	printf("Enter the alphabet");
	scanf("%c", &cha);
	if(cha=='a'|| cha=='d'|| cha=='n'|| cha=='u')
	{
		printf("alphabet is vovel");
	}
	else{
		printf("alphabet is consonemt");
	}
	return 0;
}
