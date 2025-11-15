#include <stdio.h>

  

int main () { 
	int inputVal;
	
printf("Enter integer: ");
scanf("%d",&inputVal);

	if(inputVal ==0) 
	{  printf("%d is zero.", inputVal);
	
	}else if (inputVal>=0) {
	 printf("Number is positive.");
	}


 
	else { 
		printf("Number is negative.");
	}

		return 0 ;
}
