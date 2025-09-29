#include <stdio.h>
int main(){

int a,b,c,d ;


	printf("Enter your salary: ");
	scanf("%d", &a);
	
	printf("Enter the Tax rate:");
	scanf("%d" ,&b);
	
	printf("Salary :  %d\n",a);
	printf("Tax rate : %d\n\n",b);
	
    c=(a*b)/100;
    d=a-c;
	printf("    Result:\n");
	printf("====================\n");
		printf("Tax to be paid = %d\n",c);
	printf("Net Salary left after Tax = %d",d);
	
	return 0;}
