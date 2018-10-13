/*
9. Accept sing from user and reverse the contents of that string.
(Implement strrev() function)
Input : “abcdef”
Output : “fedcba” 
*/
#include<stdio.h>
void StrRevX(char *);
int main()
{
	char arr[100];

	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	printf("String before call: %s\n",arr);
	StrRevX(arr);
	printf("String after call : %s",arr);
	
	return 0;
}

void StrRevX(char *str)
{
	char *first, *last, temp;
	if(NULL == str)
	{
		return;
	}
	first = str;
 	last = str;
	while(*last != '\0')
	{
		last++;
	}
	last--;
	
	while(first <= last)
	{
		temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}
