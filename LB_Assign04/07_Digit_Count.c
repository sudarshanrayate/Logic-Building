/*

7. Accept one numbers from user and count digits which are greater than 5. 
Input : 5437 Output : 2 
Input : 730951 Output : 3 
Input : 23003 Output : 0 

*/
#include<stdio.h>
typedef long int LONG;
LONG DigitCountX(LONG);

int main()
{
	LONG iNumber = 0;
	LONG iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNumber);
	
	iRet = DigitCountX(iNumber);
	
	printf("Digit occurr  %d Times",iRet);
	
		return 0;
}

LONG DigitCountX(LONG iNo)
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
		if(iDigit >= 5)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
