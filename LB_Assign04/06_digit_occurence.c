/*

6. Accept one numbers from user and count occurrence of 0. 
Input : 543 Output : 0 
Input : 7309 Output : 1 
Input : 73008 Output : 2 

*/

#include<stdio.h>
typedef long int LONG;
LONG DigitX(LONG);

int main()
{
	LONG iNumber = 0;
	LONG iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNumber);
	
	iRet = DigitX(iNumber);
	
	printf("Digit occurr  %d Times",iRet);
	
		return 0;
}

LONG DigitX(LONG iNo)
{
	LONG iCnt = 0;
	LONG iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
