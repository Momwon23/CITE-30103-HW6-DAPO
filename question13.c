#include <stdio.h>

int checkerMethod (int val1);
int main () { 

int val;
	int result;
	printf("Enter number: ");
	scanf("%d", &val);


	//stores the value of if the checkerMethod is successful or failed.
	result = checkerMethod(val);

		if (result ==1)
	{ 
printf(" Yes %d, is divisble by both 2 and 3 but not 7 ", val); }
	else {
	       printf("No %d, does not meet condition (div/2 and 3 but not 7)", val);	return 0;
	}

	return 0;
}


int checkerMethod (int val1)
{ 
	if ( (val1 % 2==0)  && (val1%3==0) && (val1/7 !=0)) //modulo checks for reminders during operations, if you get remainders = divisible by the number in front, if you dont get 0 then your then it wasn't divisible. 
	{
	       	return 1; // this is if 2 and 3 divides val1.
	} 
	else
 { 
	 return 0; 
	}
}
