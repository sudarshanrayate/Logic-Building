/*
2. Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)
Input : “Marvellous Multi OS”
 		10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then copy whole string into destination. 
*/
#include<stdio.h>
void StrNCpyX(char *, char *, int);
int main()
{
	char arr[30];
	char brr[50];

	printf("Enter first string :");
	scanf("%[^'\n']s",arr);
	
	StrNCpyX(arr,brr,10);
	
	printf("Original string  : %s\n",arr);
	printf("Copyed string  : %s",brr);
	return 0;
}

void StrNCpyX(char *src, char *dest, int iCnt)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}
 	while((*src != '\0')&&(iCnt != 0))
		{
			*dest = *src;
			src++;
			dest++;
			iCnt--;
		}
} 
