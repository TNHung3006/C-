#include <stdio.h>

#define MAX 1000

int checkDoThi(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

void tinhBacBanBac(int matrix[MAX][MAX], int n) {
    int bacRa[MAX] = { 0 };
    int bacVao[MAX] = { 0 };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bacRa[i] += matrix[i][j];
            bacVao[j] += matrix[i][j];
        }
    }

    // In kết quả
    if (checkDoThi(matrix, n) == 1) {
        for (int i = 0; i < n; i++) {
            printf("%d", bacRa[i]);
            if (i < n - 1) {
                printf(";");
            }
        }
    }
    else {
        // In bậc ra
        for (int i = 0; i < n; i++) {
            printf("%d", bacRa[i]);
            if (i < n - 1) {
                printf(";");
            }
        }
        printf("\n");
        for (int i = 0; i < n; i++) {
            printf("%d", bacVao[i]);
            if (i < n - 1) {
                printf(";");
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int matrix[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    tinhBacBanBac(matrix, n);

    return 0;
}