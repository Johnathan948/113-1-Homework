#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hours_worked;    
	float hourly_rate;   
	float excess_salary; 
	float total_salary;  

	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours_worked);

		if (hours_worked == -1) 
			break;

		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourly_rate);

	
		if (hours_worked > 40)
		{
			excess_salary = (hours_worked - 40) * hourly_rate * 1.5;
			total_salary = 40 * hourly_rate + excess_salary;
		}
		else
			total_salary = hours_worked * hourly_rate;

		printf("Salary is $%.2f\n", total_salary);

		printf("\n");
	}

	system("pause");
	return 0;
}