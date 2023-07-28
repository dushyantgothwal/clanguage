#include<stdio.h>
int main()
{
	char input;
	printf("Enter a character:");
	scanf("%c", &input);
	
	if ((input >= 'a'&& input <= 'z') || (input >= 'A' && input <= 'Z'))
	{
		printf("%c is an alphabet.\n", input);
	}
	else
	{
		printf("%c this a digit.\n", input);
	}
	return 0;
}
