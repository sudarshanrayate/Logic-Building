/*
8. Cost of land is 560 rupees per square feet. Accept number of square feet from user and calculate total cost. 
Input :  87 Output :  48720
*/
#include<stdio.h>
typedef long int LONG;
LONG Estimate(LONG);
int main()
{
	LONG iRadius = 0, iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iRadius);
	
	iRet = Estimate(iRadius);
	
	printf("Total Cost is %d",iRet);
	return 0;
}
LONG Estimate(LONG iNo)
{
	LONG TotalCost = 0;	
	TotalCost = 560 * iNo;
	return TotalCost;	
}
