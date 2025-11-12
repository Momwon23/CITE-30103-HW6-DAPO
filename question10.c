#include <stdio.h>

int main ()
{

 int integerSize =20;
 char charSize= 'A';
 long longSize = 23481329581;
 float floatSize= 12.32;
 double doubleSize =1.23e3;


 printf("\n----Size in Bytes.----\n");
 printf("int: %zu\n", sizeof(integerSize));
 printf("Char: %zu\n", sizeof(charSize));
 printf("Long: %zu\n", sizeof(longSize));
 printf("Float: %zu\n", sizeof(floatSize));
 printf("Double: %zu\n", sizeof(doubleSize));



}



