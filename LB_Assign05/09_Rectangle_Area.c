/*
9. Accept length and wide of rectangle and calculate its area (Length * Width). 
Input :  4.2   8.9 Output :  37.38
*/
#include<stdio.h>
float AreaRect(float,float);
int main()
{
	float iLength = 0.0, iWidth = 0.0, iRet = 0.0;
	
	printf("Enter Length\n");
	scanf("%f",&iLength);
	printf("Enter Width\n");
	scanf("%f",&iWidth);	
	
	iRet = AreaRect(iLength,iWidth);
	printf("Total Cost is %f",iRet);
	return 0;
}
float AreaRect(float iNo1, float iNo2)
{
	float fArea = 0;	
	fArea = iNo1 * iNo2;
	return fArea;	
}
