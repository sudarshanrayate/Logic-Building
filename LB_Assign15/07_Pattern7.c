/*
7. Write a program which accept two inputs from user and display below
pattern.

Input : 4 5

Output :
$ $ $ $ $
# # # # #
$ $ $ $ $
# # # # #
*/

#include<stdio.h>
void Pattern7(int,int);
int main()
{
	int iNumber1 = 0,iNumber2 = 0;
	
	printf("Enter Number of row:");
	scanf("%d",&iNumber1);

	printf("Enter Number of colum:");
	scanf("%d",&iNumber2);
		
	Pattern7(iNumber1,iNumber2);
	
	return 0;
}
void Pattern7(int iRow, int iCol)
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
	for(i = 1; i<= iRow;i++)
	{
		for(j = 1;j <= iCol; j++)
		{
			if((i % 2) == 0)
			{
				printf("  #  ");
			}
			else
			{
				printf("  $  ");
			}
			 
		}
		printf("\n");
	}
	
}
