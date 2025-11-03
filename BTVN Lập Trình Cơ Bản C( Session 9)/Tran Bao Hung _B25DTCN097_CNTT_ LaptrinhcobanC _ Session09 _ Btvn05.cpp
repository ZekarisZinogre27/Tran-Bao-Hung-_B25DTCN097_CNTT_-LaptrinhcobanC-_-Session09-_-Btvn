#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    int demChan = 0, demLe = 0;
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Cac so chan trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            demChan++;
        }
    }
    printf("\n");
    printf("Cac so le trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            demLe++;
        }
    }
    printf("\n\nTong so chan = %d\n", demChan);
    printf("Tong so le = %d\n", demLe);
    return 0;
}
