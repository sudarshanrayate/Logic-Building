/*

	5. Accept one numbers from user and return its reverse number. 

	Input : 543 Output : 345 
	Input : 78 Output : 87 
	Input : 7890 Output : 987 

*/
#include<stdio.h>
typedef long int LONG;
LONG ReverseNumber(LONG);

int main()
{
	LONG iNumber = 0,iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNumber);
	
	iRet = ReverseNumber(iNumber);
	printf("Output is : %d",iRet);
	
	return 0;
}

LONG ReverseNumber(LONG iNo)
{
	LONG iDigit = 0;
	LONG iReverse = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iReverse = (iReverse * 10) +  iDigit;
		iNo = iNo / 10;
	}
	return iReverse;

}
