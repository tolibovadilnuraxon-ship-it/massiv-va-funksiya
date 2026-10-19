#include <stdio.h>

int max_array(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    if (scanf("%d", &size) != 1) return 0;
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int natija = max_array(arr, size);
    printf("%d\n", natija);
    
    return 0;
}
