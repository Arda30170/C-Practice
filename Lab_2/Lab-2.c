#include <stdio.h>
#define M_PI 3.14
#include <math.h>

int main(void){
    /* question-1 
    float radius, sphere;
    printf("Enter the radius: \n");
    scanf("%f", &radius);
    sphere = (0.4/0.3) * M_PI * radius * radius * radius;
    printf("The volume of a sphere with radius %.2f is: %.2f", radius , sphere);
    */
    
    /* question-2 
    int lab,midterm,hw,final;
    float total_grade;
    printf("Enter the midterm grade: ");
    scanf("%d", &midterm);

    printf("Enter the final grade: ");
    scanf("%d", &final);

    printf("Enter the lab grade: ");
    scanf("%d", &lab);

    printf("Enter the homework grade: ");
    scanf("%d", &hw);

    total_grade = (midterm * 0.3) + (final * 0.4) + (lab * 0.2) + (hw * 0.1);
    printf("The total grade is: %.2f", total_grade);
    */
   
    /* question-3
    double budget, tech_expense, ent_expense, grocery_expense;
    double remain_budget, budget_percent;
    printf("Enter your budget: ");
    scanf("%lf", &budget);

    printf("Enter your tech expenses: ");
    scanf("%lf", &tech_expense);

    printf("Enter your entertainment expenses: ");
    scanf("%lf", &ent_expense);

    printf("Enter your grocery expenses: ");
    scanf("%lf", &grocery_expense);

    remain_budget = budget - (tech_expense + ent_expense + grocery_expense);
    budget_percent = (remain_budget / budget) * 100;
    printf("You still have %.2lf percent of your money, and it is %.2lf", budget_percent, remain_budget);
    */
    
    /* question-4 */
    float a,b,c;
    float op_1,op_2,op_3;
    printf("Enter the values of a,b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    op_1 = sqrt(pow(a,5) + (b * (1100/pow(c,3)) * 5 * 4) );
    op_2 = pow(b,2) - 4 * a * c + (57/75) * 21;
    op_3 = 5 * (pow(c,7) + (2 * b) + (9 * a / 99) );

    printf("1st operation's result: %.2f \n", op_1);
    printf("2nd operation's result: %.2f \n", op_2);
    printf("3rd operation's result: %.2f", op_3);
    return 0;
}