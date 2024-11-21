#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main() {
    // 設定隨機數種子
    srand(time(NULL));

    // 儲存每種點數 (2~12) 出現次數的陣列
    int frequency[13] = { 0 }; // 0 和 1 不會用到，方便使用點數作為索引

    // 模擬擲兩顆骰子 ROLLS 次
    for (int i = 0; i < ROLLS; i++) {
        int die1 = rand() % 6 + 1; // 擲第一顆骰子，數值範圍 1~6
        int die2 = rand() % 6 + 1; // 擲第二顆骰子，數值範圍 1~6
        int sum = die1 + die2;     // 計算兩顆骰子的總和
        frequency[sum]++;          // 計算該點數出現的次數
    }

    // 顯示結果
    printf("點數\t出現次數\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\n", i, frequency[i]);
    }

    return 0;
}