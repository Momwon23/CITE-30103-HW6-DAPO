#include <stdio.h> 
 

// do while loop for reading unti 0 is entered.
int main () {
	int num, positives =0, negatives= 0, evens =0, odds =0;

	do {  printf("Enter number (0 to stop): ");
       
	       	scanf("%d", &num);
       
       	if(num == 0) break;
       
       	if(num > 0) positives++;
       
       	else negatives++; // increases count for negative numbers
       
       	if(num % 2 == 0) evens++;
        else odds++;
    }
       	while(num != 0);
    printf("Positives: %d, Negatives: %d, Evens: %d, Odds: %d\n", positives, negatives, evens, odds);
 
     	return 0;
}



