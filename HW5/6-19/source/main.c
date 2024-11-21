#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main() {
    // �]�w�H���ƺؤl
    srand(time(NULL));

    // �x�s�C���I�� (2~12) �X�{���ƪ��}�C
    int frequency[13] = { 0 }; // 0 �M 1 ���|�Ψ�A��K�ϥ��I�Ƨ@������

    // �����Y������l ROLLS ��
    for (int i = 0; i < ROLLS; i++) {
        int die1 = rand() % 6 + 1; // �Y�Ĥ@����l�A�ƭȽd�� 1~6
        int die2 = rand() % 6 + 1; // �Y�ĤG����l�A�ƭȽd�� 1~6
        int sum = die1 + die2;     // �p�������l���`�M
        frequency[sum]++;          // �p����I�ƥX�{������
    }

    // ��ܵ��G
    printf("�I��\t�X�{����\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\n", i, frequency[i]);
    }

    return 0;
}