#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* in, * out;
    int cnt;               // 紀錄 fscanf() 成功讀取的項目數
    char str[100];         // 儲存讀取的字串

    in = fopen("welcome.txt", "r");   // 開啟檔案 (讀取模式)
    out = fopen("output.txt", "w");   // 開啟檔案 (寫入模式)
    while (!feof(in))                 // 如果還沒讀到檔尾
    {
        cnt = fscanf(in, "%s", str);  // 從檔案讀取一個字串
        if (cnt > 0)
            fprintf(out, "%s\n", str); // 寫入字串到新檔案
    }
    fclose(in);                      // 關閉讀取檔案
    fclose(out);                     // 關閉寫入檔案
    system("pause");
    return 0;
}