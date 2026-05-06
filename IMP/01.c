#include <stdio.h>
#include <unistd.h>  // For sleep function

int main() {
    int seconds;

    // 1. Ask user
    printf("Enter number of seconds: ");
    scanf("%d", &seconds);

    // 2. Countdown loop
    for(int i = seconds; i >= 0; i--) {
        printf("%d\n", i);
        sleep(1);  // Wait for 1 second
    }

    // 3. End message
    printf("Time's up!\n");

    return 0;
}