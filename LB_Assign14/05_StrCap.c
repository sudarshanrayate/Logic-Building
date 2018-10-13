/*
5. Write a program which accept string from user and replace
each occurrence of first character of each word into capital case.

Input : “marvellous infosystems by Piyush khairnar”

Output : “Marvellous Infosystems By Piyush Khairnar”
*/
#include<stdio.h>
void StrCapX(char *);
int main()
{
	char str[50];
	
	printf("Enter the string : ");
	scanf("%[^'\n']s",str);
	
	printf("Before call string is : %s\n",str);
	StrCapX(str);
	printf("After call string is : %s",str);
	
	return 0;
}
void StrCapX(char * str1)
{
	if(NULL == str1)
	{
		return;
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
			if((*str1 >= 'a')&&(*str1 <= 'z'))
			{
				*str1 = *str1 -32;
			}
			
		while((*str1 != ' ')&&(*str1 != '\0'))
			{
				str1++;
			}
		}	
	}
}
