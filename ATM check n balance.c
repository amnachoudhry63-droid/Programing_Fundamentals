#include <stdio.h>
int main (){
int options,balance= 10000,pin;

printf("Choose an option below:\n");
printf("1: Check Balance\n");
printf ("2: Withdraw money\n");
printf("3:Deposit money\n");

scanf("%d",&options);

switch(options){
case 1:
printf("Your balance = %d",balance);
break;

case 2:
printf("Enter your pin :");
scanf("%d",&pin);

if (pin==2025){
printf(" Total balance = %d\n",balance);
printf("Enter the amount to be withdrawn =");
int WD,RB;
scanf("%d",&WD);
RB= balance-WD;
if(WD<=100000)
printf("Remaining balance=%d.",RB);

else
printf("Error");}
else
 {printf("Incorrect pin");}
break;

case 3:
printf("Enter the amount to be deposited=");
int DP;
scanf("%d",&DP);
int TB;
TB= balance+DP;
printf("Total balance=%d",TB);
break;
default:  	printf("Invalid option.");}}
