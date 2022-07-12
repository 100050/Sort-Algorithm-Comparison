#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL)); // ���� �ʱ�ȭ
    int arr[10000], n, key; // ���� �˰���
    double start, end; // Ÿ�̸�
    FILE* fp = fopen("time.txt", "r"); // ����

    for (int j = 0; j < 100; j++) { // 100�� �ݺ�
        // for ���� ���� �ð�
        start = (((double)clock()) / CLOCKS_PER_SEC);

        n = 10000; // �ڷ� �� ��

        // random �Լ�
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 10000;
        }

        // ���� �˰��� ���� ��

        // for ���� ���� �ð�
        end = (((double)clock()) / CLOCKS_PER_SEC);
        fprintf(fp, "%lf ", (end - start)); // ���Ͽ� �Է�

    }
    fclose(fp);

    return 0;
}
