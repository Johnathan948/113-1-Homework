/*�ϥ�fread()���Ū���ɮפ��e*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE* fptr;
    char str[MAX];       // �ŧi�r���}�C str
    int bytes;           // ���� fread() ���\Ū�����r����

    fptr = fopen("output.txt", "r"); // �}���ɮ� (Ū���Ҧ�)
    while (!feof(fptr))              // �p�G�٨SŪ���ɧ�
    {
        bytes = fread(str, sizeof(char), MAX - 1, fptr); // Ū���r��
        str[bytes] = '\0';                              // �K�[�r�굲���Ÿ�
        printf("%s\n", str);                            // �L�X�ɮפ��e
    }
    fclose(fptr);                                       // �����ɮ�
    system("pause");
    return 0;
}