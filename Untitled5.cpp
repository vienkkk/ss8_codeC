#include <stdio.h>

int main() {
    int m, n;
    printf("Nhap so hang : ");
    scanf("%d", &m);
    printf("Nhap so cot : ");
    scanf("%d", &n);

    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Vi tri %d %d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                tong += a[i][j];
            }
        }
    }  
    printf("Tong: %d\n", tong);

    return 0;
}

