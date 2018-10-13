/*
5. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
Input : “Marvellous Infosystems”
 		“Logic Building”
Output : “Marvellous Infosystems Logic Building” 
*/
#include<stdio.h>
void StrCatX(char *, char *);
int main()
{
	char arr[100];
	char brr[50];

	printf("Enter first string :");
	scanf("%[^'\n']s",arr);
	fflush(stdin);
	
	printf("Enter second string :");
	scanf("%[^'\n']s",brr);
		
	StrCatX(arr,brr);
	
	printf("Original string  : %s\n",arr);

	return 0;
}
void StrCatX(char * src, char * dest)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}
	while(*src != '\0')
	{
		src++;
	}
	while(*dest != '\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	*src = '\0';
}
