/*
	4. Accept Character from user and check whether it is small case or not (a-z).
	Input : g
	Output : TRUE
	Input : D
	Output : FALSE 

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char);

int main()
{
	char ch = '\0';
	int iRet = 0;
	
	printf("Enter Charcter\n");
	scanf("%c",&ch);
	
	iRet = ChkSmall(ch);
	
	if(iRet == TRUE)
	{
		printf("Given input is Small Case");
	}
	else
	{
		printf("Given input is NOT Small Case");
	}
		return 0;
}

BOOL ChkSmall(char ch1)
{
	
	if('\0' == ch1)
	{
		return -1;
	}
	
	while( '\0' != ch1)
	{
		if(ch1 >= 'a' && ch1 <= 'z')
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
		
	}
	
}
