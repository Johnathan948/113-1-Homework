#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float total_distance;
	float gas_money;
	float kilometer_per_liter;
	int parking_fee;
	int tolls;
	int total_cost;

	printf("請輸入 一天的總里程數 (單位:公里): ");
	scanf("%f", &total_distance);

	printf("請輸入 汽油一公升的價格: ");
	scanf("%f", &gas_money);

	printf("請輸入 平均一公升能行駛多少公里: ");
	scanf("%f", &kilometer_per_liter);

	printf("請輸入 一天的停車費: ");
	scanf("%d", &parking_fee);

	printf("請輸入 一天的通行費 (過路費): ");
	scanf("%d", &tolls);

	printf("\n");

	
	total_cost = (total_distance / kilometer_per_liter) * gas_money + parking_fee + tolls + 0.5;
	printf("開車一天總共花費: %d 元\n", total_cost);

	system("pause");
	return 0;
}