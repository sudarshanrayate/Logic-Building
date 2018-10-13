/*

	8. Accept character from user. If it is capital then display all the characters from the input characters till Z.
		If input character is small then print all the characters in reverse order till a. In other cases return directly.

	Input : Q
	Output : Q R S T U V W X Y Z
	
	Input : m
	Output : m l k j i h g f e d c b a
	
	Input : 8
	Output : 

*/

#include<stdio.h>

void Display(char);

int main()
{
	char ch = '\0';
	
	printf("Enter Charcter : ");
	scanf("%c",&ch);
	fflush(stdin);
	
	Display(ch);
	
	return 0;
	
}

void Display(char ch1)
{
	int iCnt = 0;
	if('\0' == ch1)
	{
		printf("ERROR : INVALID_INPUT");
	}
	
	while('\0' != ch1)
	{
		if(ch1 >= 'A' && ch1 <= 'Z')
		{
			for(iCnt = ch1 ; iCnt <= 'Z' ; iCnt++)
			{
				printf("%c\t",iCnt);
			}
			break;
		}
		else if(ch1 >= 'a' && ch1 <= 'z')
		{
				for(iCnt = ch1 ; iCnt >= 'a' ; iCnt--)
			{
				printf("%c\t",iCnt);
			}
			break;
		}
		else
		{
			printf("ERROR : Enter Character only");
		}
	}
}
