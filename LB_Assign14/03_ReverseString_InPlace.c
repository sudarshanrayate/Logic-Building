/*
3. Write a program which accept string from user and reverse
each word in place.

Input : “Marvellous Multi OS”

Output : “suollevraM itluM SO”
*/
#include<stdio.h>
void StrWrdRev(char *);
int main()
{
	char str[50];
	
	printf("Enter the string : ");
	scanf("%[^'\n']s",str);
	
	printf("Before call string is : %s\n",str);
	StrWrdRev(str);
	printf("After call string is : %s",str);
	
	return 0;
}
void StrWrdRev(char * str1)
{
	char *Start, *End, Temp;
	
	
	
	if(NULL == str1)
	{
		return;
	}
	
	while(*str1 != '\0')
	{
		Start = str1;
		End = str1;
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
				while((*End != ' ')&&(*End != '\0'))
				{
					End++;
					str1++;
				}
				End--;
				
				while(Start <= End)
				{
					Temp = *Start;
					*Start = *End;
					*End = Temp;
				
					Start++;
					End--;
				}	
			}
			/*	Start = str1;*/	
		}		
	}
}
