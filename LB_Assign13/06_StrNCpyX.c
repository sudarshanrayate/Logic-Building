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
	char arr[100];
	char brr[50];
	int iNo = 0;

	printf("Enter first string :");
	scanf("%[^'\n']s",arr);
	fflush(stdin);
	
	printf("Enter second string :");
	scanf("%[^'\n']s",brr);
	
	printf("Enter how many chractor you want to print :");
	scanf("%d",&iNo);
	
	StrNCpyX(arr,brr,iNo);
	
	printf("After call string  : %s\n",arr);
	return 0;
}

void StrNCpyX(char *src, char *dest, int iCnt)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}
	while(*src != '\0')
	{
		src++;
	}
 	while((*dest != '\0')&&(iCnt != 0))
		{
			*src = *dest;
			src++;
			dest++;
			iCnt--;
		}
		*src = '\0';		
} 
