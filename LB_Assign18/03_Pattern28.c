/*//////////////////////////////////////////////////////////
//
//		3. Write a program which accept number from user and display
//		below pattern
//		
//		Input : 9871
//		
//		Output :
//		1
//		1 7
//		1 7 8
//		1 7 8 9
//
///////////////////////////////////////////////////////////*/
#include<stdio.h>
typedef unsigned int UINT;
void Pattern27(UINT);
int main()
{
	UINT iValue = 0; 

	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Pattern27(iValue);
	return 0;	
}
void Pattern27(UINT iNo)
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
		
		for(i = 0; i <= iCount; i++)
		{
			for(j = 1; j <= iCount; j++)
			{
				iDigit = iNumber % 10;
				if(i >= j)
				{
					printf("%d\t",iDigit);
				}
				
				iNumber = iNumber/10;
			}
			printf("\n");
			iNumber = iNo;
		}
	
}
