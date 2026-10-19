#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int size;
    
    if (scanf("%d", &size) != 1) return 0;
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    print_array(arr, size);
    
    return 0;
}
