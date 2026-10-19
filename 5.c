#include <stdio.h>

int count_even(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    if (scanf("%d", &size) != 1) return 0;
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int natija = count_even(arr, size);
    printf("%d\n", natija);
    
    return 0;
}
