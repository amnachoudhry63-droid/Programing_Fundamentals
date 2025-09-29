#include <stdio.h>
int main(){
float cal,fat,totalcal ,fatcal,percentagecals;

	printf("Enter the  no. of calories in the food: ");
	scanf("%f",&cal);
	printf("Enter the  no. of fat grams in the food: ");
	scanf("%f",&fat);
	
	if(cal<=0 || fat<=0)
	{printf("Error");
	return 0;
	}

   fatcal=fat*9;
   totalcal= cal+fatcal;
  
   if (totalcal>fatcal)
    {
    printf(" Calories from fat = %.2f.",fatcal);
    printf("\n Total Calories in food =%.2f",totalcal);
    
      percentagecals = (fatcal /totalcal ) * 100;
  
   printf("\nCalories percentage in Food= %.2f%%\n", percentagecals );
   
if (fatcal<0.3*totalcal)
   printf("\n 'Food is low in fat'.");
   
   }
   else
   printf("Error (either the calories or fat grams were incorrectly entered).");}
   
   