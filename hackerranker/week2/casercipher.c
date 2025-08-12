#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, k;
    scanf("%d", &n);  

    char s[n + 1];   
    scanf("%s", s);   

    scanf("%d", &k);  
    
    k = k % 26;

    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (isalpha(c)) { 
            char base = isupper(c) ? 'A' : 'a';
            c = ( (c - base + k) % 26 ) + base;
        }
        s[i] = c; 
    }

    printf("%s\n", s);
    return 0;
}
