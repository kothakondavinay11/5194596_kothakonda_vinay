#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHABET_COUNT 26

char* pangrams(char s[]) {
    int letters[ALPHABET_COUNT] = {0};
    int count = 0;

    // Traverse the string
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) { // check if character is alphabet
            char lower_char = tolower(s[i]);
            int index = lower_char - 'a';
            if (letters[index] == 0) {
                letters[index] = 1;
                count++;
                if (count == ALPHABET_COUNT) {
                    return "pangram";
                }
            }
        }
    }

    return "not pangram";
}

int main() {
    char s[1000];
    
    // Read the full line (including spaces)
    fgets(s, sizeof(s), stdin);

    // Output pangram check
    printf("%s\n", pangrams(s));

    return 0;
}
