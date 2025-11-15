#include <stdio.h>

int main () {
 char operation;
	double inputVal1, inputVal2, result;

 printf("Pick operation (+,-,*,/): ");
 scanf("%c",&operation);
 

printf("Enter 2 numbers: ");
scanf("%lf %lf",&inputVal1, &inputVal2 );

	// create a simple artihmetic calculator using switch.
switch(operation)  {
	case '+' :
	
            result = inputVal1 + inputVal2;
            printf("%.2lf + %.2lf = %.2lf\n", inputVal1, inputVal2, result);
            break;
            
        case '-':
            result = inputVal1 - inputVal2;
            printf("%.2lf - %.2lf = %.2lf\n", inputVal1, inputVal2, result);
            break;
            
        case '*':
            result = inputVal1 * inputVal2;
            printf("%.2lf * %.2lf = %.2lf\n", inputVal1, inputVal2, result);
            break;
            
        case '/':
	    if (inputVal2 != 0) {
                result = inputVal1 / inputVal2;
                printf("%.2lf / %.2lf = %.2lf\n", inputVal1, inputVal2, result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;

}

return 0;
}
		

