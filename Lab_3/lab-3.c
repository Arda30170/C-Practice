#include <stdio.h>

int main(void){
     /* question-1
     int x,y;
     printf("Enter x coordinate: ");  
     scanf("%d", &x);

     printf("Enter y coordinate: ");
     scanf("%d", &y);

     if(x > 0 && y > 0){
        printf("The point (%d,%d) lies in 1st quadrant.", x,y);
     } else if(x < 0 && y > 0){
        printf("The point (%d, %d) lies in 2nd quadrant.", x,y);
     }else if(x < 0 && y < 0){
        printf("The point (%d,%d) lies in 3rd quadrant.", x,y);
     }else{
        printf("The point (%d,%d) lies in 4th quadrant.", x,y);
        printf("The point (%d,%d) is in origin.", x,y);
     } */
     
     /* question-2 
     double used_gas,bill;
     printf("Enter your gas consumption int term of m3: ");
     scanf("%lf", &used_gas);
     bill = used_gas * 5;
     if(bill < 100){
        printf("Your bill is %.1lf and your gas consumption is OK.", bill);
     }else if(bill >= 100 && bill <= 200){
         printf("Your bill is %.1lf and your gas consumption is above average.", bill);
     }else printf("Your bill is %.1lf and your natural gas consumption is excessively high!", bill);
     */
   /* quesiton-3 
   float angle_1,angle_2,angle_3,sum;
   printf("Enter three angles of the triangle: ");
   scanf("%f %f %f", &angle_1, &angle_2, &angle_3);
   sum = angle_1 + angle_2 + angle_3;
   if(sum == 180 || angle_1 == angle_2 == angle_3){
      printf("This is a valid triangle and it is an equilateral one.\n");
   } else if(angle_1 == angle_2 || angle_2 == angle_3 || angle_1 == angle_3){
      printf("This is a valid triangle and it is an isosceles one.\n");
   }
   else printf("This is not a valid triangle.\n");
   */
   /* question-4 */
   char character;
   printf("Enter a character: ");
   scanf("%c", &character);
   if(character >= 65 && character <= 90){
      printf("%c is an upper case later.", character);
   }else printf("%c is not a character.", character);
}

