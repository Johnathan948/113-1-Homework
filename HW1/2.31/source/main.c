#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%-8s%-8s%-8s\n", "number", "square", "cube"); // ゴ number square cube 夹肈传︽

	for (int i = 0; i <= 10; i++)
	{
		int num;		// 纗 number
		int square_num; // 纗 number キよ挡狦
		int cube_num;	// 纗 number ミよ挡狦

		num = i;
		square_num = i * i;
		cube_num = i * i * i;

		printf("%-8d", num);		// ゴ number (计オ癸霍计ぃì干フ)
		printf("%-8d", square_num); // ゴキよ number
		printf("%-8d\n", cube_num); // ゴミよ number 传︽
	}

	system("pause");
	return 0;
}