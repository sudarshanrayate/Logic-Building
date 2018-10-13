/*

8. Accept three numbers from user and count occurrence of 0. 
Input : 543 Output : 0 
Input : 7309 Output : 1 
Input : 73008 Output : 2

*/
#include<stdio.h>
typedef long int LONG;
LONG DigitX(LONG);

int main()
{
	LONG iNumber1 = 0, iNumber2 = 0, iNumber3 = 0;
	LONG iRet = 0;
	
	printf("Enter 1st Number\n");
	scanf("%d",&iNumber1);
	
	printf("Enter 2nd Number\n");
	scanf("%d",&iNumber2);
	
	printf("Enter 3rd Number\n");
	scanf("%d",&iNumber3);
	
	iRet = DigitX(iNumber1);
	printf("Digit occurr  %d Times \n",iRet);
	
	iRet = DigitX(iNumber2);
	printf("Digit occurr  %d Times \n",iRet);
	
	iRet = DigitX(iNumber3);
	printf("Digit occurr  %d Times \n",iRet);
	
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
