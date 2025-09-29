#include <stdio.h>
int main ()
{
	int i,number;
	
	printf("Enter your number=");
	scanf("%d",&number);
	
	for (i=1;i<=number;i++){
		if (i%2==0)
		printf("%d is Even\n",i);
		
		else
		printf("%d is Odd\n",i);
	}
	return 0;
	
}