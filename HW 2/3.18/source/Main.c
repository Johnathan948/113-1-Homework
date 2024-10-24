#include <stdio.h>
#include <stdlib.h>

int main()
{
	float gross_sales;    
	float earnings_total; 

	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &gross_sales); 

		if (gross_sales == -1) 
			break;

		
		earnings_total = (gross_sales * 0.09) + 200;

		printf("Salary is: $%.2f\n", earnings_total); 

		printf("\n");
	}

	system("pause");
	return 0;
}