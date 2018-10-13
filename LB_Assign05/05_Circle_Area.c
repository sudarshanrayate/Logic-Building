/*
5. Accept radius of circle from user and calculate its area (PI*R*R). 
Input :  4.2 Output :  17.64 
*/
#include<stdio.h>
#define PI 3.14
float AreaCircle(float);
int main()
{
	float iRedius = 0.0, iRet = 0.0;
	
	printf("Enter Number\n");
	scanf("%f",&iRedius);
	
	iRet = AreaCircle(iRedius);
	
	printf("Area of circle is %f",iRet);
	return 0;
}
float AreaCircle(float iNo)
{
	float iArea = 0.0;	
	iArea = PI * iNo * iNo;
	return iArea;	
}
