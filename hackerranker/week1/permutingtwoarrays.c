#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q); 

    while (q--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n], b[n], temp;

        
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n; i++) scanf("%d", &b[i]);

        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (b[j] < b[j + 1]) {
                    temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        
        int allGood = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] + b[i] < k) {
                allGood = 0;
                break;
            }
        }

        
        printf(allGood ? "YES\n" : "NO\n");
    }

    return 0;
}
