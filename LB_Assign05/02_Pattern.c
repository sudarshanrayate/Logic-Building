/*
2. Accept number from user and print below pattern. 
Input :  4   Output :  * * * * # # # # 
*/
#include<stdio.h>
void Pattern(int);
int main()
{
	int iNumber = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNumber);
	
	Pattern(iNumber);
	return 0;
}

void Pattern(iNo)
{
	int iCnt = 0;
	for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
	{
		printf("*");
	}
	for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
	{
		printf("#");
	}

}
