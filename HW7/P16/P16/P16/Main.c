/*��L��J�r��A�ê��[���ɮ�output.txt*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
    FILE* fptr;
    char str[MAX], ch;   // �ŧi�r���}�C str �Ψ��x�s��L��J���r��
    int i = 0;

    fptr = fopen("output.txt", "a"); // �}���ɮ� (���[�Ҧ�)
    printf("�п�J�r��A��ENTER�䵲����J:\n");
    while ((ch = getche()) != ENTER && i < MAX) // ���U���䤣�O ENTER �B i < MAX
        str[i++] = ch;                         // �@���W�[�@�Ӧr����r���}�C str ��
    str[i++] = '\n';                            // ���J����r��
    fwrite(str, sizeof(char), i, fptr);         // �g�J�r����ɮ�
    fclose(fptr);                               // �����ɮ�
    printf("\n�ɮת��[����!!\n");
    system("pause");
    return 0;
}