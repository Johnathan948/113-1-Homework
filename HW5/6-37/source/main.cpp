#include <stdio.h>

// ���j�禡�G��X�}�C�����̤j��
int recursiveMaximum(int arr[], int size) {
    // �򩳱���G��}�C�u���@�Ӥ����ɡA�����^�ǸӤ���
    if (size == 1) {
        return arr[0];
    }

    // ���j�B�z�G���o�}�C�e (size - 1) �Ӥ������̤j��
    int max_of_rest = recursiveMaximum(arr, size - 1);

    // ����̫�@�Ӥ����P�e�����j�o�쪺�̤j�ȡA�^�Ǹ��j����
    return (arr[size - 1] > max_of_rest) ? arr[size - 1] : max_of_rest;
}

int main() {
    // ���եΪ���ư}�C
    int array[] = { 3, 5, 1, 9, 2, 8, 7 };
    int size = sizeof(array) / sizeof(array[0]); // �p��}�C�j�p

    // �I�s���j�禡�ÿ�X���G
    printf("�}�C�����̤j�Ȭ�: %d\n", recursiveMaximum(array, size));

    return 0;
}