/*

9. Write a program which accept one number from user and return addition of its odd digits. 
Input :  7429   Output :  16 
Input :  90281   Output :  10 
*/
#include<stdio.h>
typedef long int LONG;
LONG OddDigitSum(LONG);

int main()
{
	LONG iNumber = 0;
	LONG iRet = 0;
	
	printf("Enter 1st Number\n");
	scanf("%d",&iNumber);
	
	iRet = OddDigitSum(iNumber);
	printf("Digit Sum is  %d  \n",iRet);
	
	return 0;
}

LONG OddDigitSum(LONG iNo)
{
	LONG iSum = 0;
	LONG iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 != 0)
		{
			iSum = iSum + iDigit;
		}
		iNo = iNo / 10;
	}
	return iSum;
}
