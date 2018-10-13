/*
	5. Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as
	A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)
	
	Input : C
	Output : Your exam at 9.20 AM
	Input : d
	Output : Your exam at 10.30 AM

*/

#include<stdio.h>
void DisplaySchedule(char);

int main()
{
	char cDivision ='\0';
	
	printf("Enter Division \n");
	scanf("%c",&cDivision);
	
	DisplaySchedule(cDivision);
}

void DisplaySchedule(char division)
{
/*	
	if('\0' == division)
	{
		return -1;
	}
*/
	
	while('\0' != division)
	{
		if(division == 'A' || division == 'a')
		{
			printf("Your Exam at 7 AM");
			break;
		}
		else if(division == 'B' || division == 'b')
		{
			printf("Your Exam at 8.30 AM");
			break;
		}
		else if(division == 'C' || division == 'c')
		{
			printf("Your Exam  at 9.20 AM");
			break;
		}
		else if(division == 'D' || division == 'd')
		{
			printf("Your Exam at 10.30 AM");
			break;
		}
		else
		{
			printf("Invalid Division");
			break;
		}
	}
}
