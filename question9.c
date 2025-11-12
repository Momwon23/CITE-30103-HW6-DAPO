#include <stdio.h>

int main(){
	int a=20;
	int b=5;
float result; 

// integer division:
printf("Interger Division: %d\n", a/b);


//explicit casting.
result = (float) a/b;
	printf("Explicit: %.2f\n", result);


//implicit casting:
result = (a*1.0)/b ;
printf("Imiplicit: %.2f\n", result);

return 0;
}

