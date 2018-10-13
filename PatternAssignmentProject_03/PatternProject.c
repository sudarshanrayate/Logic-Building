#include<stdio.h>
void pattern10(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("  *  ");
		}
		printf("\n");
	}
}
void pattern11(int iRow,int iCol)
{
}
void pattern12(int iRow,int iCol)
{
}
void pattern13(int iRow,int iCol)
{
}
void pattern14(int iRow,int iCol)
{
}
void pattern15(int iRow,int iCol)
{
}

int main()
{
	int iValue1,iValue2,iChoice;
	
	printf("Enter Number of Rows : ");
	scanf("%d",&iValue1);
	
	printf("Enter Number of Colum : ");
	scanf("%d",&iValue2);
	
	printf("Enter Your Choice : ");
	scanf("%d",&iChoice);
	
vi	switch(iChoice)
	{
		case 10:
				pattern10(iValue1, iValue2);
				break;
		case 11:
				pattern11(iValue1, iValue2);
				break;
		case 12:
				pattern12(iValue1, iValue2);
				break;
		case 13:
				pattern13(iValue1, iValue2);
				break;
		default:
				printf("Wrong choice");
	}
	return 0;
}
