#include <stdio.h>
int main (){

    int number, a ;

    printf("Enter a number Number: ");
    scanf("%d", &number);
    printf("Multiplication Table of %d:\n",number);

    for(a = 1; a <= 10; a++) {
    	
    	printf("%d x %d = %d\n",number,a,number*a );

	}
    

    return 0;}

