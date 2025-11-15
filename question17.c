#include <stdio.h>


// grading system using if else.


int main () {

int inputVal;

printf("Enter grade: ");
scanf("%d",&inputVal);

if (inputVal>=90)
{
	printf("A\n");
 }else if (inputVal>=80)  {
		printf("B\n");
	}else if (inputVal >= 70) { 
          printf("C\n");
          }else if (inputVal >= 60) {
           printf("D\n");
            }else {
                    printf("F\n");
                   }
return 0;
    }
