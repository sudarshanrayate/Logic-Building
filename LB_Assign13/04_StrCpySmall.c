/*
4. Write a program which accept string from user and copy small characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi” 
*/
#include<stdio.h>
void StrCpyCap(char *, char *);
int main()
{
	char arr[30];
	char brr[50];

	printf("Enter  string :");
	scanf("%[^'\n']s",arr);
	
	StrCpyCap(arr,brr);
	
	printf("Original string  : %s\n",arr);
	printf("Copyed string  : %s",brr);
	return 0;
}

void StrCpyCap(char *src, char *dest)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}
 	while(*src != '\0')
		{
			if((*src >='a')&&(*src <='z'))
			{
				*dest = *src;
				dest++;	
			}
			src++;
			
		}
} 
