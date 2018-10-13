/*
1. Write a program which accept input from user and display below
pattern.
Input : 7

Output : A B C D E F G H
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
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(i = 1; i <= iNo; i++)
	{
		printf("%c   ",ch);
		ch++;
	}
}
