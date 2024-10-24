
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int   account_number;   
	float beginnig_balance; 
	float total_charged;    
	float total_credits;    
	float credit_limit;     
	float new_balance;      

	while (1)
	{
		printf("Enter account number (-1 to end): ");  
		scanf("%d", &account_number);

		if (account_number == -1)  
			break;

		printf("Enter beginning balance: "); 
		scanf("%f", &beginnig_balance);
		printf("Enter total charges: ");     
		scanf("%f", &total_charged);
		printf("Enter total credits: ");     
		scanf("%f", &total_credits);
		printf("Enter credit limit: ");      
		scanf("%f", &credit_limit);

		
		new_balance = beginnig_balance + total_charged - total_credits;

		if (new_balance > beginnig_balance) // 
			printf("Account:      %d\n", account_number); 
		printf("Credit limit: %.2f\n", credit_limit); 
		printf("Balance:      %.2f\n", new_balance);  
		printf("Credit Limit Exceeded.\n");

		printf("\n");
	}

	system("pause");
	return 0;
}