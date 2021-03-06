#include<stdio.h>
#include<iostream>
////////////////////////////////////////////
//	3. Write a program which accept two inputs from user and display below
//	pattern.
//	Input : 4 5
//
//		Output :
//		** * * *
//		* * * * *
//		* * * * *
//		* * * * *
////////////////////////////////////////////
void Pattern3(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			printf("*   ");
		}
		printf("\n");
	}

}
/*
4. Write a program which accept two inputs from user and display below
pattern.

Input : 4 5

Output :
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
void Pattern4(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j < iCol; j++)
		{
			printf("%d  ", j);
		}
		printf("\n");
	}

}
/*
5. Write a program which accept two inputs from user and display below
pattern.

Input : 4 5

Output :
1 $ 3 $ 5
1 $ 3 $ 5
1 $ 3 $ 5
1 $ 3 $ 5
*/
void Pattern5(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if ((j % 2) == 0)
			{
				printf("   $   ");
			}
			else
			{
				printf("   %d   ", j);
			}
		}
		printf("\n");
	}

}
/*
6. Write a program which accept two inputs from user and display below
pattern.

Input : 4 5

Output :
1 $ 2 $ 3
1 $ 2 $ 3
1 $ 2 $ 3
1 $ 2 $ 3
*/
void Pattern6(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= (iCol - 2); j++)
		{
			if (j != (iCol - 2))
			{
				printf("%d  $  ", j);
			}
			else
			{
				printf("%d", j);
			}
		}
		printf("\n");
	}

}
/*
7. Write a program which accept two inputs from user and display below
pattern.

Input : 4 5

Output :
$ $ $ $ $
# # # # #
$ $ $ $ $
# # # # #
*/
void Pattern7(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if ((i % 2) == 0)
			{
				printf("  #  ");
			}
			else
			{
				printf("  $  ");
			}

		}
		printf("\n");
	}

}
/*
8. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
* * * *
* * *
* *
*
*/
void Pattern8(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = iRow; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("  *  ");
		}
		printf("\n");
	}

}
/*
9. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
*
* *
* * *
* * * *

*/
void Pattern9(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("  *  ");
		}
		printf("\n");
	}

}
/*
10. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
* * * *
* $ $ *
* $ $ *
* * * *

*/
void Pattern10(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if ((i == 1) || (j == 1))
			{
				printf("  *  ");
			}
			else if ((i == iRow) || (j == iCol))
			{
				printf("  *  ");
			}
			else
			{
				printf("  $  ");
			}
		}
		printf("\n");
	}

}
/*
1. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
* * * *
* 	  *
*     *
* * * *

void Pattern(int iRow, int iCol)

*/
void Pattern11(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if ((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
			{
				printf("  *  ");
			}
			else
			{
				printf("     ");
			}
		}
		printf("\n");
	}

}
/*
2. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4
Output :
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
*/
void Pattern12(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if ((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
			{
				printf("  %d  ", j);
			}
			else
			{
				printf("  *  ");
			}
		}
		printf("\n");
	}

}
/*
3. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
1 1 1 1
2 * * 2
3 * * 3
4 4 4 4
*/
void Pattern13(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if ((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
			{
				printf("  %d  ", i);
			}
			else
			{
				printf("  *  ");
			}
		}
		printf("\n");
	}

}
/*
4. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
1
2 3
4 5 6
7 8 9 10

*/
void Pattern14(int iRow, int iCol)
{
	int i = 0, j = 0, iCount = 1;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{

		for (j = 1; j <= i; j++)
		{
			printf("  %d  ", iCount);
			iCount++;
		}

		printf("\n");
	}

}
/*
5. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
1 * * *
2 3 * *
4 5 6 *
7 8 9 10

*/
void Pattern15(int iRow, int iCol)
{
	int i = 0, j = 0, iCount = 1;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if (i < j)
			{
				printf("  *  ");
			}
			else
			{
				printf("  %d  ", iCount);
				iCount++;
			}
		}
		printf("\n");
	}
}
/*
6. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4
Output :
1 2 3 4
1 2 3
1 2
1

*/
void Pattern16(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = iRow; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("  %d  ", j);

		}
		printf("\n");
	}
}
/*
7. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

Output :
1
2 2
3 3 3
4 4 4 4

*/
void Pattern17(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if (i >= j)
			{
				printf("  %d  ", j);
			}

		}
		printf("\n");
	}
}
/*
8. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4
Output :
1 * * *
2 2 * *
3 3 3 *
4 4 4 4
*/
void Pattern18(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if (i >= j)
			{
				printf("  %d  ", i);
			}
			else
			{
				printf("  *  ");
			}

		}
		printf("\n");
	}
}
/*
9. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4

	Output :
	$ * * *
	# $ * *
	# # $ *
	# # # $
*/
void Pattern19(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if (i > j)
			{
				printf("  #  ");
			}
			else if (i < j)
			{
				printf("  *  ");
			}
			else
			{
				printf("  $  ");
			}
		}
		printf("\n");
	}
}
/*
10. Write a program which accept two inputs from user and display below
pattern.

Input : 4 4
Output :
* * * *
* * *
* *
*

*/
void Pattern20(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow < 0)
	{
		iRow = -iRow;
	}
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if (i <= j)
			{
				printf("  *  ");
			}
			else
			{
				printf("     ");
			}
		}
		printf("\n");
	}
}


int main()
{
	int iValue1, iValue2, iChoice;

	printf("Enter Number of Rows : ");
	scanf_s("%d", &iValue1);

	printf("Enter Number of Colum : ");
	scanf_s("%d", &iValue2);

	printf("Enter Your Choice : ");
	scanf_s("%d", &iChoice);

	switch (iChoice)
	{
	case 3:
		Pattern3(iValue1, iValue2);
		break;
	case 4:
		Pattern4(iValue1, iValue2);
		break;
	case 5:
		Pattern5(iValue1, iValue2);
		break;
	case 6:
		Pattern6(iValue1, iValue2);
		break;
	case 7:
		Pattern7(iValue1, iValue2);
		break;
	case 8:
		Pattern8(iValue1, iValue2);
		break;
	case 9:
		Pattern9(iValue1, iValue2);
		break;
	case 10:
		Pattern10(iValue1, iValue2);
		break;
	case 11:
		Pattern11(iValue1, iValue2);
		break;
	case 12:
		Pattern12(iValue1, iValue2);
		break;
	case 13:
		Pattern13(iValue1, iValue2);
		break;
	case 14:
		Pattern14(iValue1, iValue2);
		break;
	case 15:
		Pattern15(iValue1, iValue2);
		break;
	case 16:
		Pattern16(iValue1, iValue2);
		break;
	case 17:
		Pattern17(iValue1, iValue2);
		break;
	case 18:
		Pattern18(iValue1, iValue2);
		break;
	case 19:
		Pattern19(iValue1, iValue2);
		break;
	case 20:
		Pattern20(iValue1, iValue2);
		break;
	default:
		printf("Wrong choice");
	}
	return 0;
}