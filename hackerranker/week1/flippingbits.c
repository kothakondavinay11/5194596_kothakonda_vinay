#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    unsigned int quire;                  
    for(int i = 0; i < n; i++) {
        
        scanf("%u", &quire);          
        unsigned int flippedbits = ~quire & 0xFFFFFFFF; 
        printf("%u\n", flippedbits);      
    }
    return 0;
}
