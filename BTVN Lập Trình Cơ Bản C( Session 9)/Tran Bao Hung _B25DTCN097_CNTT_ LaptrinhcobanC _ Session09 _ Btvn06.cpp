#include <stdio.h>
int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);
    int found = 0;
    printf("Gia tri %d xuat hien o vi tri: ", x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i + 1);
            found = 1;
        }
    }
    if (!found) {
        printf("\nGia tri %d khong ton tai trong mang.\n", x);
    } else {
        printf("\n");
    }
    return 0;
}
