/*
4. Accept length of side from user and calculate area of square. 
Input :  4.2 Output :  17.64 
*/
#include<stdio.h>
float AreaSquare(float);
int main()
{
	float iLength = 0.0, iRet = 0.0;
	
	printf("Enter Number\n");
	scanf("%f",&iLength);
	
	iRet = AreaSquare(iLength);
	
	printf("Area of square is %f",iRet);
	return 0;
}
float AreaSquare(float iNo)
{
	float iArea = 0.0;	
	iArea = iNo * iNo;
	return iArea;	
}
