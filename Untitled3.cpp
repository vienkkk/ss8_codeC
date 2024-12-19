#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc ma tran n: ");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("vi tri %d %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]); 
        }
        printf("\n");
    }

    return 0;
}

