#include <stdio.h>

int main() {
    int i;

    printf("=== Numbers from 1 to 10 (with break and continue) ===\n");

    for (i = 1; i <= 10; i++) {
        // Skip printing number 3
        if (i == 3) {
            continue;  // Skip the rest of the loop and go to the next iteration
        }

        // Stop the loop when number reaches 5
        if (i == 5) {
            break;  // Exit the loop completely
        }

        printf("%d\n", i);  // Print current number
    }

    return 0;
}
