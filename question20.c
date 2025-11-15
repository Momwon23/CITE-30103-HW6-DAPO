#include <stdio.h>
int main() {
    int num, count = 0;
    do {
        printf("Enter number (0 to stop): ");
        scanf("%d", &num);
        if(num != 0) count++;
    } while(num != 0);
    printf("Numbers entered: %d\n", count);
    return 0;
}
