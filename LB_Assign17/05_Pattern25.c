/*///////////////////////////////////////////////////////////////////////////
//		5. Write a program which accept string from user and display
//		below pattern
//		
//		Input : Hello
//		
//		Output :
//		
//		Input : Hello
//		H @ @ @ @
//		H e @ @ @
//		H e l @ @
//		H e l l @
//		H e l l o
//		
////////////////////////////////////////////////////////////////////////////*/
#include<stdio.h>
void Pattern25(char *);
int main()
{
	char ch[50];

	printf("Enter String : ");
	scanf("%[^'\n']s",&ch);
	
	Pattern25(ch);
	return 0;
	
}

void Pattern25(char * str)
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
			if(i < j)
			{
				printf("@\t");
			}
			else
			{
				printf("%c\t",str[a]);
			}
			a++;
		}
		a = 0;
		printf("\n");	
	}
}
