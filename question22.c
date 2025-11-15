#include <stdio.h>



int main () {
	int num, reversed = 0, remainder;
   
       	printf("Enter number: ");
   
    scanf("%d", &num);
    
    int original = num;
 
    while(num != 0) {
 
     	    remainder = num % 10;
 
 	reversed = reversed * 10 + remainder; // saves last digit to reversed.
 
 	num /= 10;
    }
 
    printf("Original: %d, Reversed: %d\n", original, reversed);
 
    return 0;
}
