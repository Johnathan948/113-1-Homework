#include <stdio.h>

// 遞迴函式：找出陣列中的最大值
int recursiveMaximum(int arr[], int size) {
    // 基底條件：當陣列只有一個元素時，直接回傳該元素
    if (size == 1) {
        return arr[0];
    }

    // 遞迴處理：取得陣列前 (size - 1) 個元素的最大值
    int max_of_rest = recursiveMaximum(arr, size - 1);

    // 比較最後一個元素與前面遞迴得到的最大值，回傳較大的值
    return (arr[size - 1] > max_of_rest) ? arr[size - 1] : max_of_rest;
}

int main() {
    // 測試用的整數陣列
    int array[] = { 3, 5, 1, 9, 2, 8, 7 };
    int size = sizeof(array) / sizeof(array[0]); // 計算陣列大小

    // 呼叫遞迴函式並輸出結果
    printf("陣列中的最大值為: %d\n", recursiveMaximum(array, size));

    return 0;
}