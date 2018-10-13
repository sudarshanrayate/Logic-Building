/*
8. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
* * * *
* * *
* *
*
*/
#include<stdio.h>
void Pattern8(int,int);
int main()
{
	int iNumber1 = 0,iNumber2 = 0;
	
	printf("Enter Number of row:");
	scanf("%d",&iNumber1);

	printf("Enter Number of colum:");
	scanf("%d",&iNumber2);
		
	Pattern8(iNumber1,iNumber2);
	
	return 0;
}
void Pattern8(int iRow, int iCol)
{
	int i = 0,j = 0;
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	for(i = iRow; i>=1  ;i--)
	{
		for(j = 1;j <= i ; j++)
		{
				printf("  *  ");
		}
		printf("\n");
	}
	
}
