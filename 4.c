#include <stdio.h>

int min_array(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    if (scanf("%d", &size) != 1) return 0;
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int natija = min_array(arr, size);
    printf("%d\n", natija);
    
    return 0;
}
