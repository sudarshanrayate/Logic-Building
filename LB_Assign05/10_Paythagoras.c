/*
10. Write a program which accept length of three sides of triangle and check whether it is Pythagorean triple or not.  
Input :  3 4 5  Output :  TRUE 
Input :  9 2 8   Output :  FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkPythagorus(int,int,int);
int main()
{
	int iNo1 = 0, iNo2 = 0, iNo3 = 0, iRet = 0;
	
	printf("Enter first number\n");
	scanf("%d",&iNo1);
	printf("Enter second number\n");
	scanf("%d",&iNo2);
	printf("Enter third number\n");
	scanf("%d",&iNo3);	
	
	iRet = ChkPythagorus(iNo1,iNo2,iNo3);
	if(iRet == TRUE)
	{
		printf("It is Pythagorean triple");
	}
	else
	{
		printf("It is NOT Pythagorean triple");
	}
	
	return 0;
}
BOOL ChkPythagorus(int iNumber1,int iNumber2,int iNumber3)
{
	int iResult1 = 0, iResult2 = 0;	
	iResult1 = (iNumber1 * iNumber1) + (iNumber2 * iNumber2);
	iResult2 = iNumber3 * iNumber3;
	if(iResult1 == iResult2)
	{
		return TRUE;
	}	
}
