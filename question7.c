#include <stdio.h>

#define PI 3.141592653588783 // this is the link section.


float calcArea(float radius);
float calcCircumference(float radius);

int main(){
	float Area, Circumference;
	float radius;

	printf("Enter radius: ");
	scanf("%f",&radius); // initialized radius and saved it as what the user entered.

	Area= calcArea(radius); // the radius entered by user is saved into the identifier radius and then we use calcArea on the radius entered, where calcArea is a function defined with the area of a circle. after this is saved as a "Area".
	Circumference= calcCircumference(radius); //same process is done here but for circumference.

	printf("\n---Results---\n");
	printf("Area of Circle: %.2f\n", Area);
	printf("Circumference of Circle: %.2f\n", Circumference);

return 0; //end of program.
}

float calcArea (float radius) {
	return PI * (radius *radius);
            } 
float calcCircumference(float radius){
	return 2 *(PI * radius);
                   }
