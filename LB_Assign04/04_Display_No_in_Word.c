/*

	4. Accept one numbers from user and display the output as. 

	Input : 543 Output : Three Four Five 

	Input : 7309 Output : Nine Zero Three Seven 

*/
#include<stdio.h>
typedef long int LONG;
LONG DisplayNo(LONG);

int main()
{
	LONG iNumber = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNumber);
	
	DisplayNo(iNumber);
	
	return 0;
}

LONG DisplayNo(LONG iNo)
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
		
			switch(iDigit)
			{
				case 0 : printf("Zero\t");
						 break;
				case 1 : printf("One\t");
						 break;
				case 2 : printf("Two\t");
						 break;
				case 3 : printf("Three\t");
						 break;
				case 4 : printf("Four\t");
						 break;
				case 5 : printf("Five\t");
						 break;
				case 6 : printf("Six\t");
						 break;
				case 7 : printf("Seven\t");
						 break;
				case 8 : printf("Eight\t");
						 break;
				case 9 : printf("Nine\t");
						 break;
			}
		iNo = iNo / 10;
	}

}
