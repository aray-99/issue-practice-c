#include <stdio.h>

int main() {
    // Bug: 1 + 1 is incorrectly calculated as 3
    printf("1 + 1 = %d\n", 1 + 2);
    return 0;
}