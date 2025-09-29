#include <stdio.h>

int main() {
    int hours;
    float d1, d2, d3, d4, d5, total, average;
    
 printf(" \nRestriction: Time(hours) traveled must not be negative\n");
    printf("Enter hours traveled (1 to 5): ");
    scanf("%d", &hours);
    
printf("\nEnter your distance(miles) for each hour\n Warning : distance must be non negative and must not be same \n");
    printf("\nEnter distance for hour 1: ");
    scanf("%f", &d1);

    printf("\nEnter distance for hour 2: ");
    scanf("%f", &d2);

    printf("\nEnter distance for hour 3: ");
    scanf("%f", &d3);

    printf("\nEnter distance for hour 4: ");
    scanf("%f", &d4);

    printf("\nEnter distance for hour 5: ");
    scanf("%f", &d5);

    total = d1 + d2 + d3 + d4 + d5;
    average = total / hours;

    printf("\nAverage Speed = %.2f miles/hour\n", average);

    return 0;
}