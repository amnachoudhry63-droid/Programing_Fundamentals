#include <stdio.h>
int main(){


char  character;

printf("Enter you characater:");
scanf("%c",&character);

if (character>='a'&& character<='z')
{

printf("\nEntered character is a 'Small Alphabet'.");}

else if(character>='A'&& character<='Z')
{

printf("\n Entered character is a 'Capital Alphabet'. ");}

else if(character>='0'&& character<='9')
{

printf("\n Entered character is a 'Digit'. ");}

else
printf("\nEntered character is a 'Special Character'.");

return 0;
}
