#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("\t"); 

		if (i % 2 != 0) // 
		{
			for (int j = 0; j < (9 - i) / 2; j++) 
				printf(" "); 

			for (int k = 1; k <= i; k++) 
				printf("*"); 
		}
		else
			printf("\n"); 
	}

	printf("\n");

	system("pause");
	return 0;
}