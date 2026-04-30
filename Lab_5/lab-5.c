#include <stdio.h>

int main(void){

    double weight, distance, cost = 0;
    printf("Enter a weight: ");
    scanf("%lf", &weight);

    printf("Enter a distance: ");
    scanf("%lf", &distance);

    if (weight > 0 && weight < 7) {
        cost = distance * weight;
        printf("Your calculated cost shipping is: %5.lf", cost);
    } else if (distance > 5 && distance < 10) {
         cost = distance * weight * 3;
         printf("Your calculated cost of shipping with extras: %5.lf", cost);
    } else if (distance > 10) {
        cost = distance * weight * 7.5;
        printf("Your calculated cost of shipping with extras: %5.lf", cost);
    }else {
        printf("Enter a proper value weight or distance.");
    }
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 350 == 0) {
        printf("%i is divisible by both 7 and 50.", number);
    } else {
        printf("%i is not divisible by both 7 and 50.", number);
    }
}