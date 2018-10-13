/*
7. Accept radius of circle from user and calculate its circumference (2*PI*R). 
Input :  4.2 Output :  26.39 
*/
#include<stdio.h>
#define PI 3.14
float AreaCircle(float);
int main()
{
	float iRadius = 0.0, iRet = 0.0;
	
	printf("Enter Number\n");
	scanf("%f",&iRadius);
	
	iRet = AreaCircle(iRadius);
	
	printf("circumference of circle is %f",iRet);
	return 0;
}
float AreaCircle(float iNo)
{
	float iArea = 0.0;	
	iArea = 2 * PI * iNo;
	return iArea;	
}
