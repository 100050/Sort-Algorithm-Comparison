#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL)); // 난수 초기화
    int arr[10000], n, key; // 정렬 알고리즘
    double start, end; // 타이머
    FILE* fp = fopen("time.txt", "r"); // 파일

    for (int j = 0; j < 100; j++) { // 100번 반복
        // for 루프 시작 시간
        start = (((double)clock()) / CLOCKS_PER_SEC);

        n = 10000; // 자료 만 개

        // random 함수
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 10000;
        }

        // 정렬 알고리즘 들어가는 곳

        // for 루프 끝난 시간
        end = (((double)clock()) / CLOCKS_PER_SEC);
        fprintf(fp, "%lf ", (end - start)); // 파일에 입력

    }
    fclose(fp);

    return 0;
}
