#include <stdio.h>

#define SIZE 100   // fixed size for frequency array

void countingSort(int arr[], int n, int freq[]) {
    // Initialize frequency array to zero
    for (int i = 0; i < SIZE; i++) {
        freq[i] = 0;
    }

    // Count occurrences
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int freq[SIZE];
    countingSort(arr, n, freq);
    
    // Output the frequency array
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");
    
    return 0;
}
