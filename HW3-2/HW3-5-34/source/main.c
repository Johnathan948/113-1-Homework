#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void)
{
	int input_base;
	int input_exponent;
	int exponent_number;

	printf("Enter base number: ");
	scanf("%d", &input_base);

	printf("Enter exponent number (greater than or equal to 1): ");
	scanf("%d", &input_exponent);

	exponent_number = power(input_base, input_exponent);

	printf("Exponent number is %d\n", exponent_number);

	system("pause");
	return 0;
}

/*
	power(int base, int exponent)
	使用迴遞方式撰寫副程式，當副程式輸入 exponent 不為 1 時回傳 base * power(base, exponent - 1)，直到副程式輸入 exponent 為 1 時回傳 base。

	ex. 當 power(4, 3) 時:
	1. power(4, 3)
	2. 4 * power(4, 2)
	3. 4 * 4 * power(4, 1)
	4. 4 * 4 * 4 = 64
*/
int power(int base, int exponent)
{
	if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}