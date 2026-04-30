#include <stdio.h>
#include <math.h>
int main(void){
    /* Question-1
    float distance,weight,cost;
    printf("Enter a distance: ");
    scanf("%f", &distance);

    printf("Enter a weight: ");
    scanf("%f", &weight);

    if(distance < 0 || weight < 0){
        printf("You entered wrong value.");
    }
        else if(weight > 0 && weight < 7){
            if(distance >= 5 && distance <= 10){
                cost = distance * weight * 3;
                printf("Your cost is: %.2f \n", cost);
            }else if(distance > 10){
                cost = distance * weight * 7.5;
                printf("Your cost is: %.2f", cost);
            }
        }else printf("Pls enter a weight in given range.");

        Question-2 
        int a = 0, b = 0, c = 0;
        double root_1, root_2, discriminant;
        printf("Enter the indicies of equation (ax^2 + b^x + c): %d %d %d \n", a,b,c);
        scanf("%d %d %d", &a, &b, &c);
        discriminant = pow(b,2) - (4 * a * c);
         if(discriminant > 0){
            root_1 = (-b + sqrt(discriminant)) / (2.0 * a);
            root_2 = (-b - sqrt(discriminant)) / (2.0 * a);
            printf("The roots of the equation (%dx^2 + %d^x + %d):  %.2lf and %.2lf", a,b,c,root_1,root_2); 
        }else printf("The discriminant value is not greater then 0."); */

         float c, f , k;
         printf("Enter a temperature value in terms of Fahrenheit: ");
         scanf("%f", &f);
         c = (f - 32) * 5.0/9.0;
         k = c + 273.15;
         if(k <= 0.001){
            printf(" %.2f Fahrenheit equals to %.2f Kelvin and its right at absolute zero.", f, k);
         }else if(k > 0){
            printf("%.2f Fahrenheit equals to %.2f Kelvin and its above absolute zero.", f, k);
         }else printf("%.2f Fahrenheit equals to %.2f Kelvin and below absolute zero.", f, k);
         return 0;
    }
  