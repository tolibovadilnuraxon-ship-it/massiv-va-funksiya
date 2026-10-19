#include <stdio.h>

int array_sum(int arr[], int size) {
    int yigindi = 0;
    for (int i = 0; i < size; i++) {
        yigindi += arr[i];
    }
    return yigindi;
}

int main() {
    int size;
    
    if (scanf("%d", &size) != 1) return 0;
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int jami_yigindi = array_sum(arr, size);
    printf("%d\n", jami_yigindi);
    
    return 0;
}
