/*
1.Write a program which accept one number from user and return smallest digit. 
Input :  712   Output :  1 
Input :  7520   Output :  0 
UINT MinDigit (LONG iNo) 
*/
#include<stdio.h>
typedef unsigned int UINT;
typedef  int LONG;
LONG MinDigit(LONG);
int main()
{
	LONG iNumber = 0;
	LONG iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNumber);
	
	iRet = MinDigit(iNumber);
	printf("Minimum Digit is  %d",iRet);	
	return 0;
}

LONG MinDigit(LONG iNo)
{
	LONG iMin = 0;
	LONG iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	iDigit = iNo % 10;
	iMin = iDigit;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit <= iMin)
		{
			iMin = iDigit;
		}
		
		iNo = iNo / 10;
	}
	return iMin;
}
