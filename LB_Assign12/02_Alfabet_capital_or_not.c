/*
	2. Accept Character from user and check whether it is capital or not (A-Z).
	Input : F
	Output : TRUE
	Input : d
	Output : FALSE 

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char);

int main()
{
	char ch = '\0';
	int iRet = 0;
	
	printf("Enter Charcter\n");
	scanf("%c",&ch);
	
	iRet = ChkCapital(ch);
	
	if(iRet == TRUE)
	{
		printf("Given input is Capital");
	}
	else
	{
		printf("Given input is NOT Capital");
	}
		return 0;
}

BOOL ChkCapital(char ch1)
{
	
	if('\0' == ch1)
	{
		return -1;
	}
	
	while( '\0' != ch1)
	{
		if(ch1 >= 'A' && ch1 <= 'Z')
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
		
	}
	
}
