#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fptr;          // �ŧi���V�ɮת�����
    char ch;             // �ŧi�r���ܼ�ch�A�Ψӱ���Ū�����r��
    int count = 0;         // �ŧi���count�A�Ψӭp���ɮת��r��

    fptr = fopen("welcome.txt", "r"); // �}���ɮ�
    if (fptr != NULL)      // �p�Gfopen()���Ǧ^�Ȥ���NULL�A
    {                    // �N���ɮ׶}�Ҧ��\
        while ((ch = getc(fptr)) != EOF) // �P�_�O�_��F�ɧ�
        {
            printf("%c", ch);   // �@���L�X�@�Ӧr��
            count++;
        }
        fclose(fptr);    // �����Ҷ}�Ҫ��ɮ�
        printf("\n�`�@�@��%d�Ӧr��\n", count);
    }
    else
        printf("�ɮ׶}�ҥ���!!!\n"); // �ɮ׶}�ҥ���
    system("pause");
    return 0;
}