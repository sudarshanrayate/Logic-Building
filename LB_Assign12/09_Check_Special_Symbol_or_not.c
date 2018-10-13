/*

	9. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

	Input : %
	Output : TRUE
	
	Input : d
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
	
	if(iRet == FALSE)
	{
		printf("Given input is NOT Special Symbol");
	}
	else
	{
		printf("Given input is Special Symbol");
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
		if((ch1 >= 'a' && ch1 <= 'z') || (ch1 >= 'A' && ch1 <= 'Z')|| (ch1 >= 48 && ch1 <= 57))
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
		
	}
	
}
