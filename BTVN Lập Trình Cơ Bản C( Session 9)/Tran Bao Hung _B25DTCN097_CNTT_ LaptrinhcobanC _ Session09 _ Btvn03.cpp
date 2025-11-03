#include <stdio.h>
int main() {
    int n;
    // Nh?p s? ph?n t? c?a m?ng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n]; // Khai báo m?ng có n ph?n t?
    // Nh?p t?ng ph?n t? c?a m?ng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // In ra toàn b? các ph?n t? trong m?ng
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
