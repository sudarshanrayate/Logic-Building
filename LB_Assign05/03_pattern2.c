/*
3. Write a program which accept number from user and print below pattern as. 
Input :  6   Output :  * $ * $ * $ * $ * $ * $ 
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
void Pattern(int iNo)
{
	int iCnt = 0;
	for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
	{
		printf("* \t $ \t");	
	}
}
