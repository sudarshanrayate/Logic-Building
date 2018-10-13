/*///////////////////////////////////////////////////////
//
//	5. Write a program which accept number from user and display
//	below pattern
//	
//	Input : 9871
//	
//	Output :
//	1 7 8 9
//	1 0 0 9
//	1 0 0 9
//	1 7 8 9
//
////////////////////////////////////////////////////////*/
#include<stdio.h>
typedef unsigned int UINT;
void Pattern30(UINT);
int main()
{
	UINT iValue = 0; 

	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Pattern30(iValue);
	return 0;	
}
void Pattern30(UINT iNo)
{
	int iDigit = 0, iNumber = iNo;
	int i = 0, j = 0, iCount = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNumber != 0)
	{
		iDigit = iNumber % 10;
		iCount++;
		iNumber = iNumber/10;
	}
	iNumber = iNo;
		
		for(i = 1; i <= iCount; i++)
		{
			for(j = 1; j <= iCount; j++)
			{
				iDigit = iNumber % 10;
				if((i == 1)||(i == iCount)||(j == 1)||(j == iCount))
				{
					printf("%d\t",iDigit);
				}
				else
				{
					printf("0\t");
				}
				
				iNumber = iNumber/10;
			}
			printf("\n");
			iNumber = iNo;
		}
	
}
