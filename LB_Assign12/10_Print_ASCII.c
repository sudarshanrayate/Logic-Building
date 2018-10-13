/* 
 */
 
 #include<stdio.h>

void DisplayASCII(char);

int main ()
{
	char ch = '\0';
	
	printf("Enter Charcter : ");
	scanf("%c",&ch);
	
	DisplayASCII(ch);
	
	return 0;
}

void DisplayASCII(char ch1)
{
	int iCnt = 0;
	
	printf("Decimal\tOctal\tHexadecimal \n");
	printf("%d \t %o \t %x \n",ch1,ch1,ch1);
}
