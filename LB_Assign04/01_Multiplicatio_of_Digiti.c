/*

1.Write a program which accept one number from user and return multiplication of its digits. (If number contains 0 then ignore that 0)  
Input :  712   Output :  14 

*/

#include<stdio.h>
typedef unsigned int UINT;
UINT DigitMultiplication(UINT);

int main()
{
	UINT iNumber = 0;
	UINT iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNumber);
	
	iRet = DigitMultiplication(iNumber);
	
	printf("Digit Multiplication is  %d",iRet);
	
		return 0;
}

UINT DigitMultiplication(UINT iNo)
{
	UINT iMult = 1;
	UINT iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			iMult;
		}
		else
		{
			iMult = iMult * iDigit;
		}	
		iNo = iNo / 10;
	}
	return iMult;
}
