#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    int count = 0; 

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Outer loop for each sock
    for (int i = 0; i < n; i++) {
        if (ar[i] == -1) continue; 
        int sum = 1; 
        
        for (int j = i + 1; j < n; j++) {
            if (ar[j] == ar[i]) {
                sum++;      
                ar[j] = -1; 
                if (sum == 2) { 
                    count++;
                    sum = 0; 
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
