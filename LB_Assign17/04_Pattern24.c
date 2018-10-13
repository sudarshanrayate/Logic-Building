/*//////////////////////////////////////////////////////////////////
//		4. Write a program which accept string from user and display
//		below pattern
//		
//		Input : Hello
//		
//		Output :
//		
//		H e l l o
//		H * * * o
//		H * * * o
//		H * * * o
//		H e l l o
//		
////////////////////////////////////////////////////////////////////*/
#include<stdio.h>
void Pattern24(char *);
int main()
{
	char ch[50];

	printf("Enter String : ");
	scanf("%[^'\n']s",&ch);
	
	Pattern24(ch);
	return 0;
	
}

void Pattern24(char * str)
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
	for(i = 1; i <= iCnt; i++)
	{
		for(j = 1; j <= iCnt; j++)
		{
			if((i == 1)||(i == iCnt)||(j == 1)||(j == iCnt))
			{
				printf("%c\t",str[a]);
				
			}
			else
			{
				printf("*\t");
			}
			a++;
		}
		a = 0;
		printf("\n");	
	}
}
