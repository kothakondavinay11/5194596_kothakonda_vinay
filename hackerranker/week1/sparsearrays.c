#include <stdio.h>
#include <string.h>
int main() {
    int n, q;    
    scanf("%d", &n);
    char str[n][21];  
    for (int i = 0; i < n; i++) {
        scanf("%20s", str[i]);
    }
    scanf("%d", &q);
    char qurie[q][21];   
    for (int i = 0; i < q; i++) {
        scanf("%20s", qurie[i]);
    }
    int result[q];
    for (int i = 0; i < q; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(qurie[i], str[j]) == 0) {
                count++;
            }
        }
        result[i] = count;
    }
    
    for (int i = 0; i < q; i++) {
        printf("%d", result[i]);
        if (i != q - 1) printf("\n");
    }
    printf("\n");

    return 0;
}
