/*

	6. Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255. 

*/

#include<stdio.h>

void DisplayASCII();

int main ()
{
	DisplayASCII();
	
	return 0;
}

void DisplayASCII()
{
	int iCnt = 0;
	
	printf("Decimal\tSymbol\tOctal\tHexadecimal \n");
	
	for(iCnt =0 ; iCnt <256 ; iCnt++)
	{
		printf("%d \t %c \t %o \t %x \n",iCnt,iCnt);
	}
}
