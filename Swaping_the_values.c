#include <stdio.h>
int main(){

int A, B;

	printf("Enter value of A: ");
	scanf("%d", &A);
	
	printf("Enter value of B:");
	scanf("%d" ,&B);
	
	printf("Before Swaping: A= %d,B=%d\n\n",A,B);
	
	A=A+B;
	B=A-B;
	A=A-B;
	printf("**********************\n\n");
	printf("After Swaping: A= %d,B=%d\n",A,B);
	return 0;
}