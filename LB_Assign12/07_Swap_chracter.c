/*

	7. Accept two characters from user and swap its contents if both the characters are small or both the characters are capital. 
		In other cases keep the contents as it is.
	Input : K L
	Output : L K

	Input : K o
	Output : K o
	
	Input : u g
	Output : g u
	
	Input : * h
	Output : * h 

*/

#include<stdio.h>

void SwapX();
int main()
{
	char ch1 = '\0';
	char ch2 = '\0';
	
	printf("Enter First Chracter \n");
	scanf("%c",&ch1);
	fflush(stdin);
	
	printf("Enter Second Chracter \n");
	scanf("%c",&ch2);
	fflush(stdin);
	
	SwapX(ch1 , ch2);
	
	return 0;
}



void SwapX(char *p, char *q)
{
	char Temp = '\0';
	
	if('\0' == *p || '\0' == *q)
	{
		printf("ERROR : INVALID_INPUT");
	}
	
	
	
	while('\0' == p && '\0' == q)
	{
		if((*p >= 'A' && *p <= 'Z') && (*q >= 'A' && *q <= 'Z'))
		{
			Temp = *p;
			*p = *q;
			*q = Temp;
			printf("After Swap :%c%c",*p,*q);	
		}
		else if((*p >= 'a' && *p <= 'z') && (*q >= 'a' && *q <= 'z'))
		{
			Temp = *p;
			*p = *q;
			*q = Temp;
			printf("After Swap :%c%c",*p,*q);	
		}
		else
		{
			printf("%c%c",*p,*q);
		}
	}
}
