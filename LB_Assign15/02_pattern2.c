/*
2. Write a program which accept input from user and display below
pattern.

Input : 7

Output : A b C d E f G h
*/
#include<stdio.h>
void Pattern(int);
int main()
{
	int iNumber = 0;
	
	printf("Enter Number :");
	scanf("%d",&iNumber);
	
	Pattern(iNumber);
	
	return 0;
}
void Pattern(int iNo)
{
	int i = 0;
	char ch = 'A';
	char ch2 = 'b';
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(i = 1; i <= iNo; i++)
	{
		if((i % 2 ) != 0)
		{
			printf("%c   ",ch);
			ch = ch + 2;
		}
		else
		{
			
			printf("%c   ",ch2);
			ch2 = ch2 + 2;
		}
	}
}
