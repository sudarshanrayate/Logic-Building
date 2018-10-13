/*

10. Write a program which accept one number from user and return difference between addition of its even digits and addition of odd digits. 
Input :  7429   Output :  -10 (6-16) 
Input :  90281   Output :  0 (10-10)

*/
#include<stdio.h>
typedef long int LONG;
LONG DigitDiff(LONG);

int main()
{
	LONG iNumber = 0;
	LONG iRet = 0;
	
	printf("Enter 1st Number\n");
	scanf("%d",&iNumber);
	
	iRet = DigitDiff(iNumber);
	printf("Digit Sum is  %d  \n",iRet);
	
	return 0;
}

LONG DigitDiff(LONG iNo)
{
	LONG iEvenSum = 0, iOddSum = 0;
	LONG iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iEvenSum = iEvenSum + iDigit;
		}
		else
		{
			iOddSum = iOddSum + iDigit;	
		}
		iNo = iNo / 10;
	}
	return iEvenSum - iOddSum;
}
