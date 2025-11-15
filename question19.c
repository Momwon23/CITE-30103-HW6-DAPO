#include <stdio.h>

int main() { 
	int n, sum =0 , i=1 ;

	printf("Enter n: ");
    scanf("%d", &n);
    while(i <= n) {
        sum += i;
        i++;
    }
    printf("Sum from 1 to %d = %d\n", n, sum);
    return 0;
}
