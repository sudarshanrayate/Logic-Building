/*
1.Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string 
*/
#include<stdio.h>
void strcpyXY(const char *, char *);
int main()
{
	char arr[30];
	char brr[50];
	
	printf("Enter first string :");
	scanf("%[^'\n']s",arr);
	printf("Original string  : %s\n",arr);
	strcpyXY(arr,brr);
	printf("Copyed string  : %s",brr);
	return 0;
}
void strcpyXY(const char * str1, char * str2)
{
	if((NULL == str1)||(NULL == str2))
	{
		return;
	}
	
	while(*str1 != '\0')
	{
		*str2 = *str1;
		str1++;
		str2++;
	}
}
