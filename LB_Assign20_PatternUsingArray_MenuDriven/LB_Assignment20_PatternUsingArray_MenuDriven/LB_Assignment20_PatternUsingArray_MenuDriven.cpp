#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

namespace PatternAssisgment20OnArray
{

	//
	// Every below pattern function accepts base address of array
	// and number of elements from user
	//
	// 1. Write a program which print below pattern as
	///////////////////////////////////////////
	//
	// Innput : 89 67 45 45 78
	// 5
	//
	// Output
	// 89 67 45 45 78
	// 89 67 45 45 78
	// 89 67 45 45 78
	// 89 67 45 45 78
	// 89 67 45 45 78
	//
	///////////////////////////////////////////
	void Pattern1(int arr[], int iSize)
	{
		int i = 0, j = 0;
		arr[0];
		for (i = 1; i <= iSize; i++)
		{
			for (j = 1; j <= iSize; j++)
			{
				printf("%d\t", arr[j]);
			}
			printf("\n");
		}
	}
	// 2. Write a program which print below pattern as
	///////////////////////////////////////////
	//
	// Innput : 89 67 45 11 78
	// 5
	//
	// Output
	// 89 67 45 11 78
	// 78 11 45 67 89
	// 89 67 45 11 78
	// 78 11 45 67 89
	// 89 67 45 11 78
	//
	///////////////////////////////////////////
	void Pattern2(int arr[], int iSize)
	{
		// Logic
	}
	// 3. Write a program which print below pattern as
	///////////////////////////////////////////
	//
	// Innput : 89 67 45 11 78
	// 5
	//
	// Output
	// 89 67 45 11 78
	// 89 67 45 11
	// 89 67 45
	// 89 67
	// 89
	//
	///////////////////////////////////////////
	void Pattern3(int arr[], int iSize)
	{
		// Logic
	}
	// 4. Write a program which print below pattern as
	///////////////////////////////////////////
	//
	// Innput : 89 67 45 11 78
	// 5
	//
	// Output
	// 89
	// 89 67
	// 89 67 45
	// 89 67 45 11
	// 89 67 45 11 78
	//
	///////////////////////////////////////////
	void Pattern4(int arr[], int iSize)
	{
		// Logic
	}
	// 5. Write a program which print below pattern as
	///////////////////////////////////////////
	//
	// Innput : 89 67 45 11 78
	// 5
	//
	// Output
	// 89 67 45 11 78
	// 89 0 0 0 78
	// 89 0 0 0 78
	// 89 0 0 0 78
	// 89 67 45 11 78
	//
	///////////////////////////////////////////
	void Pattern5(int arr[], int iSize)
	{
		// Logic
	}
	///////////////////////////////////////////

	int main()
	{
		BOOL Running = TRUE;
		int* ptr = NULL;
		int iLength = 0, i = 0, iChoice = 0;
		printf("\n-- Marvellous Innfosystems : Array Pattern Printing Application --\n\n");
		printf("Enter number of Elements : \t");
		scanf_s("%d", &iLength);
		ptr = (int*)malloc(iLength * sizeof(int));
		if (NULL == ptr)
		{
			printf("Error in memory allocation\n");
			return -1;
		}
		for (i = 0; i < iLength; i++)
		{
			printf("Enter elemennt no : %d\t", i + 1);
			scanf_s("%d", &ptr[i]);
		}
		while (Running)
		{
			printf("\nEnter your choice\n");
			scanf_s("%d", &iChoice);
			switch (iChoice)
			{
			case 1:
				Pattern1(ptr, iLength);
				break;
			case 2:
				Pattern2(ptr, iLength);
				break;
			case 3:
				Pattern3(ptr, iLength);
				break;
			case 4:
				Pattern4(ptr, iLength);
				break;
			case 5:
				Pattern5(ptr, iLength);
				break;
			case 0:
				Running = FALSE;
				break;
			default:
				printf("Wrong choice\n");
				break;
			}
		}
		printf("\nTerminating Pattern prinnting Application....\n");
		return 0;
	}
}

