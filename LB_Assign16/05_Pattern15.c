/*
5. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
1 * * *
2 3 * *
4 5 6 *
7 8 9 10

*/
#include<stdio.h>
void Pattern15(int,int);
int main()
{
	int iNumber1 = 0,iNumber2 = 0;
	
	printf("Enter Number of row:");
	scanf("%d",&iNumber1);

	printf("Enter Number of colum:");
	scanf("%d",&iNumber2);
		
	Pattern15(iNumber1,iNumber2);
	
	return 0;
}
void Pattern15(int iRow, int iCol)
{
	int i = 0,j = 0,iCount = 1;
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	for(i = 1; i <= iRow   ;i++)
	{	
		for(j = 1;j <= iCol ; j++)
		{
			if(i < j)
			{
				printf("  *  ");
			}
			else
			{
				printf("  %d  ",iCount);
				iCount++;	
			}				
		}
		printf("\n");
	}
}
