/*//////////////////////////////////////////////////////////
//
//		1. Write a program which accept number from user and display
//		below pattern
//		
//		Input : 987
//		
//		Output :
//		9 8 7
//		9 8 7
//		9 8 7
//
///////////////////////////////////////////////////////////*/
#include<stdio.h>
typedef unsigned int UINT;
void Pattern26(UINT);
int main()
{
	UINT iValue = 0; 

	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Pattern26(iValue);
	return 0;	
}
void Pattern26(UINT iNo)
{
	int iDigit = 0, iNumber = iNo,iNum = iNo;
	int i = 0, j = 0, iCount = 0,iRev = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNumber != 0)
	{
		iDigit = iNumber % 10;
		iCount++;
		iNumber = iNumber / 10;
	}
	
	/* Reverse Number */
	while (iNum != 0)
	{
	iRev = iRev * 10;
    iRev = iRev + iNum % 10;
    iNum = iNum / 10;
	}
	iNumber = iRev;
		for(i = 1; i <= iCount; i++)
		{
			for(j = 1; j <= iCount; j++)
			{
				iDigit = iNumber % 10;
				printf("%d\t",iDigit);
				iNumber = iNumber/10;
			}
			printf("\n");
			iNumber = iRev;
		}
	
}
