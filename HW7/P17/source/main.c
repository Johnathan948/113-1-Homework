/*使用fread()函數讀取檔案內容*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE* fptr;
    char str[MAX];       // 宣告字元陣列 str
    int bytes;           // 紀錄 fread() 成功讀取的字元數

    fptr = fopen("output.txt", "r"); // 開啟檔案 (讀取模式)
    while (!feof(fptr))              // 如果還沒讀到檔尾
    {
        bytes = fread(str, sizeof(char), MAX - 1, fptr); // 讀取字元
        str[bytes] = '\0';                              // 添加字串結束符號
        printf("%s\n", str);                            // 印出檔案內容
    }
    fclose(fptr);                                       // 關閉檔案
    system("pause");
    return 0;
}