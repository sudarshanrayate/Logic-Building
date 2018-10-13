/*
2. Write a program which accept string from user and return
length of largest word.

Input : “Marvellous Multi OS Infosystems”

Output : 11
*/
#include<stdio.h>
int LargWordCount(char *);
int main()
{
	char str[50];
	int iRet = 0;
	
	printf("Enter the string : ");
	scanf("%[^'\n']s",str);
	
	iRet = LargWordCount(str);
	printf("length of largest word is : %d",iRet);
	
	return 0;
}
int LargWordCount(char * str1)
{
	int iMax = 0,iCount = 0;
	if(NULL == str1)
	{
		return -1;
	}
	
	while(*str1 != '\0')
	{
		if(*str1 == ' ')
		{
			while((*str1 == ' ')&&(*str1 != '\0'))
			{
				str1++;
			}	
		}
		else if(*str1 != ' ')
		{
		while((*str1 != ' ')&&(*str1 != '\0'))
			{
				str1++;
				iMax++;
			}
			if(iCount < iMax)
			{
				iCount = iMax;
			}
			iMax = 0;	
		}	
	}
	return iCount;
}
