#include <stdio.h>
#include <stdlib.h>

int main()
{
	float loan_principal; 
	float interest_rate;  
	int loan_days;        
	float interest_total; 

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &loan_principal);

		if (loan_principal == -1) 
			break;

		printf("Enter interest rate: ");
		scanf("%f", &interest_rate);
		printf("Enter term of the loan in days: ");
		scanf("%d", &loan_days);

		
		interest_total = loan_principal * interest_rate * loan_days / 365;

		printf("The interest charge is $%.2f\n", interest_total); 

		printf("\n");
	}

	system("pause");
	return 0;
}