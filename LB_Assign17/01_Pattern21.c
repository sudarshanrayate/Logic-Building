/*
1. Write a program which accept string from user and display
below pattern

Input : Marvellous

Output :

M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s

*/
#include<stdio.h>
void Pattern21(char *);
int main()
{
	char ch[50];

	printf("Enter String : ");
	scanf("%[^'\n']s",&ch);
	
	Pattern21(ch);
	return 0;
	
}

void Pattern21(char * str)
{
	int iCnt = 0,a= 0;
	char * p = (char *)str;
	int i = 0, j = 0;
	if(NULL == str)
	{
		return;
	}
	
	while(*p != '\0')
	{
		p++;
		iCnt++;
	}
	printf("%d\n",iCnt);
	
	
	for(i = 1; i <= iCnt; i++)
	{
		for(j = 1; j <= iCnt; j++)
		{
			printf("%c\t",str[a]);
			a++;
		}
		a = 0;
		printf("\n");
		
	}
	
}
