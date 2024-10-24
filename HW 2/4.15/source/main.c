#include <stdio.h>
#include <stdlib.h>

int main()
{
	float principal = 5000;   
	float current_rate = 0.1; 
	float amount = 0;         

	printf("%s%21s\n", "Year", "Amount on deposit");

	for (int year = 1; year <= 15; year++)
	{
		amount = principal * (1 + current_rate); 

		current_rate += 0.005; 
		principal = amount; 

		printf("%4d%21.2f\n", year, amount); 
	}

	system("pause");
	return 0;
}