#include <stdio.h>


// area of a rectangle = [L x W.
// perimeter is = 2(L + W)
 
int CalcArea(int length, int width);
int CalcPerimeter(int length, int width);

int main () {
	int area, perimeter;
	int L ,W;
 
	printf("Enter length of rectangle: ");
	scanf("%d", &L); // holds int value of length
	printf("Enter width of rectangle: ");
	scanf("%d", &W); // holds int value of width

// calling the function that we defined earlier
	area= CalcArea(L,W); // uses int value of inputed length and width to  and then it runs based on the Calc Area fucntion and saves the output as area / permiter .... 
	perimeter = CalcPerimeter (L,W); // does the same thing as the top just for permieter a
		
	printf("\n---Output---\n");
	printf("Area: %d \n", area);
	printf("Perimeter: %d \n", perimeter);
	return 0 ; // ends of the main porgram.
	}

 int CalcArea(int length, int width){
	 return length * width;
 				}

int CalcPerimeter (int length, int width)
{  return 2 * (length + width );
   }
