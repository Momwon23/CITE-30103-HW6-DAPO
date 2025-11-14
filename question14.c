#include <stdio.h>

int main () {

int num ;
 

printf("Enter Number: ");
scanf("%d", &num);

// (?:) operator works like condition ? expression_if_true : expression_if_false
 
num==0 ? printf("Number is 0\n."):
 num> 0? printf("Number is positive\n."): // prints numb is positive , prints negative if  false. 
   printf("Number is negative\n."); // prints if false.

return 0;
}
