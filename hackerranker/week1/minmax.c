#include <stdio.h>

int main() {
    int n = 5; 
    long arr[5];
    for (int i = 0; i < n; i++) {
        scanf("%ld", &arr[i]);
    }
    
    long total = 0;
    long min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++) {
        total += arr[i];
        if(arr[i] < min) min = arr[i];    
        if(arr[i] > max) max = arr[i];    
    }

    printf("%ld %ld\n", total - max, total - min);
    return 0;
}
