#include <stdio.h>

int main(){
    int arr[100]; 
    int currentLength=0; 
    int n, i, deleteIndex;

    printf("Nhap so luong phan tu (toi da 100): ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (i=0; i<n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength=n;
    printf("Nhap vi tri can xoa (0 - %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);
    for(i=deleteIndex; i<currentLength-1; i++) {
        arr[i] = arr[i+1]; 
    }
    currentLength--; 
    printf("Mang sau khi xoa phan tu:\n");
    for(i=0; i<currentLength; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
