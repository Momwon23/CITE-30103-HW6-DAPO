#include <stdio.h> 

//prompting for 5 grades and then running logical operator on all 5 to show output
void goodGrade();
void badGrade();

void  goodGrade  ()
 { printf("PASS!!!");
}
void  badGrade ()
{
printf("FAIL!!!");
} 

int main () { 
	int val1 ,val2,val3 ,val4, val5;

	printf("Enter 5 Grades: ");

	scanf("%d,%d,%d,%d,%d", &val1, &val2, &val3, &val4, &val5);
if ((val1>=40) && (val2>=40) && (val3>=40) && (val4>=40) && (val5>=40))
{  goodGrade();
}
else {
       	badGrade();
}

return 0;
} 
