#include <stdio.h>

int main(){
    int arr[100];
    int currentLength=0;
    int n, i, addValue, addIndex;

    printf("Nhap so luong phan tu (toi da 100): ");
    scanf("%d", &n);
    printf("\nNhap %d phan tu:\n", n);
    for(i=0; i<n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength=n;
    printf("\nNhap gia tri muon them: ");
    scanf("%d", &addValue);
    printf("\nNhap vi tri muon them (0 - %d): ", currentLength-1);
    scanf("%d", &addIndex);
    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex+1;
    } else {
        for(i=currentLength; i>addIndex; i--) {
            arr[i] = arr[i-1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }
    printf("\nMang sau khi them phan tu");
    for(i=0; i<currentLength; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
