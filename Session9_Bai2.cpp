#include <stdio.h>

int main(){
    int arr[100];
    int n, i, updateIndex, newValue;

    printf("Nhap so luong phan tu (toi da 100): ");
    scanf("%d", &n);
    printf("\nNhap cac phan tu cua mang:\n");
    for(i=0; i<n; i++){
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nNhap vi tri can sua (0 - %d): ", n-1);
    scanf("%d", &updateIndex);
    printf("\nNhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[updateIndex] = newValue;
    printf("\nMang sau khi sua:\n");
    for (i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
