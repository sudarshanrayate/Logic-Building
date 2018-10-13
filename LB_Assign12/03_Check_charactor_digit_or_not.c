/*

	3. Accept Character from user and check whether it is digit or not(0-9).
	Input : 7
	Output : TRUE
	Input : d
	Output : FALSE 

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char);

int main()
{
	char ch = '\0';
	int iRet = 0;
	
	printf("Enter Charcter\n");
	scanf("%c",&ch);
	
	iRet = ChkDigit(ch);
	
	if(iRet == TRUE)
	{
		printf("Given input is Digit");
	}
	else
	{
		printf("Given input is NOT Digit");
	}
		return 0;
}

BOOL ChkDigit(char ch1)
{
	
	if('\0' == ch1)
	{
		return -1;
	}
	
	while( '\0' != ch1)
	{
		if(ch1 >=48 && ch1 <=57)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
		
	}
	
}
