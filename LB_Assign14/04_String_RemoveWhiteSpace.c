/*
4. Write a program which accept string from user and copy the
contents into another string by removing all white spaces.

Input : “Marvel lous multi OS”
Output : “MarvellousmultiOS”
*/
#include<stdio.h>
void StrCpyX(const char *,char *);
int main()
{
	char arr[50];
	char brr[50];

	
	printf("Enter the arring : ");
	scanf("%[^'\n']s",arr);
	
	printf("Before call arring is : %s\n",arr);
	StrCpyX(arr,brr);
	printf("After call arring is : %s",brr);
	
	return 0;
}
void StrCpyX(const char * src,char * dest)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}
	
	while(*src != '\0')
	{
		if(*src == ' ')
		{
			while((*src == ' ')&&(*src != '\0'))
			{
				src++;
			}	
		}
		else if(*src != ' ')
		{
		while((*src != ' ')&&(*src != '\0'))
			{
				*dest = *src;
				dest++;
				src++;
			}
		}	
	}
}
