/*
7. Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp()function).
Input : “Marvellous Infosystems”
 		“Marvellous Infosystems”
Output : TRUE 
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL StrCmpX(char *, char *);
int main()
{
	char arr[100];
	char brr[50];
	BOOL iRet = FALSE;

	printf("Enter first string :");
	scanf("%[^'\n']s",arr);
	fflush(stdin);
	
	printf("Enter second string :");
	scanf("%[^'\n']s",brr);
	
	
	iRet = StrCmpX(arr,brr);
	if(iRet == TRUE)
	{
		printf("Both strings are equal");
	}
	else if(iRet == FALSE)
	{
		printf("“Both strings are NOT equal ");
	}
	return 0;
}
BOOL StrCmpX(char * src1, char * src2)
{
	if((NULL == src1)||(NULL == src2))
	{
		return;
	}
	while((*src1 != '\0') &&(*src2 != '\0'))
	{
		if(*src1 != *src2)
		{
			break;
		}
		src2++;
		src1++;
	}
	if((*src1 != '\0') &&(*src2 != '\0'))
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}	
}
