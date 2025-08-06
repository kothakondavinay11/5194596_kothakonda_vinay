#include <stdio.h>
#include <string.h>

int main() {
    char time12[11];            
    char convertedTime[9];      
    scanf("%10s", time12);

    int hour, minute, second;
    char meridian[3];

    sscanf(time12, "%2d:%2d:%2d%2s", &hour, &minute, &second, meridian);

    
    if (strcmp(meridian, "AM") == 0) {
        if (hour == 12) {
            hour = 0;
        }
    } else {
        if (hour != 12) {
            hour += 12;
        }
    }

    
    sprintf(convertedTime, "%02d:%02d:%02d", hour, minute, second);

    
    printf("%s\n", convertedTime);

    
    return 0;
}
