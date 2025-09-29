#include <stdio.h>
#include <math.h>
int main (){

double a,b,c,discr,root1,root2,realpart,imgpart;
printf("Enter the value of a=");
scanf("%lf",&a);
printf("Enter the value of b=");
scanf("%lf",&b);
printf("Enter the value of c=");
scanf("%lf",&c);

discr=b*b-4*a*c;

if(a==0)
{
printf("Equation is not Quadratic");}

else if(discr==0){

	root1=-b/2*a;
	root2=-b/2*a;
	    	printf("Roots are Equal\nRoot 1 = %.2lf\nRoot 2 = %.2lf",root1,root2);}
	
else if(discr>0)
{
  root1 = (-b + sqrt(discr)) / (2 * a);
        root2 = (-b - sqrt(discr)) / (2 * a);
	printf("Roots are Real and Distinct.\nRoot1 = %.2lf\nRoot2 = %.2lf",root1,root2);
}

else if(discr<0)
{
printf("Roots are Imaginary.");

realpart= -b / (2 * a);
imgpart=sqrt(-discr) / (2 * a);

printf("\nRoot1 =%.2lf + %.2lfi\n Root2 =%.2lf - %.2lfi",realpart,imgpart,realpart,imgpart);

}

return 0;

}