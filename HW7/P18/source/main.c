#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* in, * out;
    int cnt;               // ���� fscanf() ���\Ū�������ؼ�
    char str[100];         // �x�sŪ�����r��

    in = fopen("welcome.txt", "r");   // �}���ɮ� (Ū���Ҧ�)
    out = fopen("output.txt", "w");   // �}���ɮ� (�g�J�Ҧ�)
    while (!feof(in))                 // �p�G�٨SŪ���ɧ�
    {
        cnt = fscanf(in, "%s", str);  // �q�ɮ�Ū���@�Ӧr��
        if (cnt > 0)
            fprintf(out, "%s\n", str); // �g�J�r���s�ɮ�
    }
    fclose(in);                      // ����Ū���ɮ�
    fclose(out);                     // �����g�J�ɮ�
    system("pause");
    return 0;
}