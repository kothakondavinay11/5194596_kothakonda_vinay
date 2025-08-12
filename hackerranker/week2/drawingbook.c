#include <stdio.h>

int pageCount(int n, int p) {
    int fromFront = p / 2;
    int fromBack = n / 2 - p / 2;
    if (fromFront < fromBack) return fromFront;
    else return fromBack;
}

int main() {
    int n, p;
    scanf("%d", &n);  
    scanf("%d", &p);  
    int result = pageCount(n, p);
    printf("%d\n", result);

    return 0;
}
