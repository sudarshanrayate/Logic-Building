/*
10. Accept string from user and check whether the string is palindrome or not without considering its case.

Input : “abccBa”
Output : TRUE 
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckPalindrom(char *);
int main()
{
	char Arr[50];
	int iRet = FALSE;
	printf("Enter String : ");
	scanf("%[^'\n']s",Arr);
	
	
	iRet = CheckPalindrom(Arr);
	if(iRet == TRUE)
	{
		printf("String is Palindrom");
	}
	else if(iRet == FALSE)
	{
		printf("String is NOT Palindrom");
	}
	return 0;
}
BOOL CheckPalindrom(char * str)
{
	char * Start = str , * End = str;
	if(NULL == str)
	{
		return -1;
	}
	while(* End != '\0')
	{
		End++;
	}
	End--;


	while(Start <= End)
	{
		if((*Start >= 'A')&&(*Start <= 'Z')&&(*End >= 'a')&&(*End <= 'z'))
		{
			*Start = *Start + 32;	
		}
		else if((*Start >= 'a')&&(*Start <= 'z')&&(*End >= 'A')&&(*End <= 'Z'))
		{
			*Start = *Start - 32;	
		}
		
		if (*Start != *End)
		{
			break;
		}
		Start++;
		End--;
	}
	
	
	if(Start > End)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
