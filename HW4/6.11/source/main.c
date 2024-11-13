#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void BubbleSort(int arr[]);

int main()
{
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    printf("Data items in original order:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n\nData items in processing:\n");

    BubbleSort(a);

    printf("\nData items in ascending order:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}

void BubbleSort(int arr[])
{
    int count = 1; // 魁磅︽Ω计

    for (int i = 0; i < SIZE - 1; i++) // 糷癹伴北逼Ω计
    {
        int swapped = 0; // 魁琌秈︽筁ユ传

        /*
            –Ωず糷癹伴ゑ耕Ω计搭ぶ1
            1 : j 单 0 ~ (SIZE - 2)
            2 : j 单 0 ~ (SIZE - 3)
            3 : j 单 0 ~ (SIZE - 4)

            ex.
            SIZE = 5
            array[SIZE] = { 2, 5, 1 , 4, 3 } ;
            1 : j 单 0 ~ 3 (逼 a[4] 程兜计 5)
            2 : j 单 0 ~ 2 (逼 a[3] Ω兜计 4)
            3 : j 单 0 ~ 1
        */
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // ユ传 arr[j] ㎝ arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; // 癘魁Τユ传祇ネ
            }
        }

        printf("%2d:", count);

        for (int i = 0; i < SIZE; i++)
        {
            printf("%4d", arr[i]);
        }

        printf("  swapped = %d\n", swapped);

        // 狦⊿Τユ传祇ネ矗玡挡逼
        if (swapped == 0)
            break;

        count++;
    }
}