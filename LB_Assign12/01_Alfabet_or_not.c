/*

	1. Accept Character from user and check whether it is alphabet or not (A-Z a-z).
	Input : F
	Output : TRUE
	Input : &
	Output : FALSE 

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char);

int main()
{
	char ch = '\0';
	int iRet = 0;
	
	printf("Enter Charcter\n");
	scanf("%c",&ch);
	
	iRet = ChkAlpha(ch);
	
	if(iRet == TRUE)
	{
		printf("Given input is Alphabet");
	}
	else
	{
		printf("Given input is NOT Alphabet");
	}
		return 0;
}

BOOL ChkAlpha(char ch1)
{
	
	if('\0' == ch1)
	{
		return -1;
	}
	
	while( '\0' != ch1)
	{
		if(ch1 >= 'a' && ch1 <= 'z' || ch1 >= 'A' && ch1 <= 'Z')
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
		
	}
	
}
