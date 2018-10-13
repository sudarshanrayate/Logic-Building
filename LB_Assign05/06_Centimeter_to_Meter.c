/*
6. Accept distance in centimetre and convert into meter. 1 meter  = 100 Centimeter  
Input :  87 Output :  0.87 
*/
#include<stdio.h>
float AreaCircle(float);
int main()
{
	float icentimetre = 0.0, iRet = 0.0;
	
	printf("Enter Number\n");
	scanf("%f",&icentimetre);
	
	iRet = AreaCircle(icentimetre);
	
	printf("distance in meter is %f",iRet);
	return 0;
}
float AreaCircle(float iNo)
{
	float iMeter = 0.0;	
	iMeter = (iNo / 100) ;
	return iMeter;	
}
