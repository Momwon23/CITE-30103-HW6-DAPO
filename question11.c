#include <stdio.h>

int addition(int input1, int input2);
int subtraction (int input1,int input2);
float division (int input1, int input2);
int remainder_opp (int input1, int input2);
int multiplication (int input1, int input2);

int main (){
int val1, val2;

int Add ,Sub, Multi, Remainder;
float div; 
printf("Enter first int: ");
scanf("%d", &val1);

printf("Enter Secondt int: ");
scanf("%d", &val2);

Add= addition (val1,val2);
Sub= subtraction (val1,val2);
Multi= multiplication (val1,val2);
Remainder = remainder_opp (val1,val2);
div= division (val1,val2);

printf("\n-----Results-----\n");
printf ("Addition: %d\n",Add );
printf ("Subtraction: %d\n", Sub);
printf ("Multiplication: %d\n",Multi );
printf ("Division: %.2f\n",div );
printf ("Remainder: %d\n", Remainder);


return 0;
}
int addition(int input1, int input2) {

return input1 +input2 ;
} 

int subtraction (int input1, int input2) {
return input1 - input2;
}

float division (int input1, int input2) {
	return (float)input1/input2 ;
}
int multiplication (int input1, int input2) {
return input1 * input2 ;

}
int remainder_opp (int input1, int input2) {
	return input1 %input2 ; // modulo gives you remainder. 
}
