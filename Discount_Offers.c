#include <stdio.h>
int main ()
{
	int actualAmt,discount,totalAmt;
	
	printf("Enter the Actual Amount:");
	scanf("%d",&actualAmt);
	
	if (actualAmt>1999)
	{ 	if (actualAmt>=2000 && actualAmt<=4000 )
{
		printf("20%% Discount will be given.\n");
		printf("\nActual Amount =%d",actualAmt);
		
	discount=actualAmt*0.2;
	totalAmt=actualAmt-discount;
	
printf("\nSaved Amount = %d",discount);
printf("\nAmount After Discount = %d",totalAmt);}
	
	else if (actualAmt>=4001 && actualAmt<=6000 )
	{
			printf("30%% Discount will be given.\n");
		printf("\nActual Amount = %d",actualAmt);
		
	discount=actualAmt*0.3;
	totalAmt=actualAmt-discount;
	
printf("\nSaved Amount = %d",discount);
printf("\nAmount After Discount = %d",totalAmt);}
	
	else if (actualAmt>6000)
		{
			printf("50%% Discount will be given.\n");
			printf("\nActual Amount = %d",actualAmt);
		
	discount=actualAmt*0.5;
	totalAmt=actualAmt-discount;
	
printf("\nSaved Amount = %d",discount);
printf("\nAmount After Discount = %d",totalAmt);}
	}
	else 
	{
	printf("No Discount.\n");
		printf("Amount to be paid = %d",actualAmt);}
		
return 0;	
}