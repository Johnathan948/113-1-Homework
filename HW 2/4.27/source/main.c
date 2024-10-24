#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; 
	int b; 
	int c; 

	int count = 0;

	printf("%s%2c%4s%2c%4s\n", "a*a", '+', "b*b", '=', "c*c");
	printf("\n");

	
	for (c = 1; c <= 500; c++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (a = 1; a <= 500; a++)
			{
				if ((a + b > c) && (a <= b))
				{
					if ((a * a + b * b) == c * c)
						printf("%3d%6d%6d\n", a, b, c);
				}
			}
		}
	}

	system("pause");
	return 0;
}