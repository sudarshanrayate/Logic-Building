/*
1.Write a program which accept string from user count number of
words from string

Input : “Marvellous Multi OS”

Output : 3
*/
#include<stdio.h>
int WordCount(char *);
int main()
{
	char str[50];
	int iRet = 0;
	
	printf("Enter the string : ");
	scanf("%[^'\n']s",str);
	
	iRet = WordCount(str);
	printf("Number of words are : %d",iRet);
	
	return 0;
}
int WordCount(char * str1)
{
	int iCount = 0;
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
			}
			iCount++;
		}	
	}
	return iCount;
}
