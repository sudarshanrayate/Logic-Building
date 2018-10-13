/*	

	3. Write a program which accept one number from user and return the occurrence of digit 5. 

	Input :  712   Output :  0 

	Input :  7525   Output :  2 
 

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
		if(iDigit == 5)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
