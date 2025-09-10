#include <stdio.h>
int main(){
    float num1,num2,result;
    int choice;

printf("Enter First Number : ");
scanf("%f",&num1);
printf("Enter Second Number : ");
scanf("%f",&num2);

printf("\n Choose An Operation \n");
printf("1. Addition \n");
printf("2. Subtraction \n");
printf("3. Multiplication \n");
printf("4. Division \n");
scanf("%d",&choice);

switch (choice) {
    case 1:
          result = num1 + num2;
          printf("Your Final Result : %.2f",result);
        break;
    
    case 2:
          result = num1 - num2;
          printf("Your Final Result : %.2f\n",result);
          break;
    
    case 3:
          result = num1 * num2;
          printf("Your Final Result : %.2f\n",result);
          break;
    
    case 4:
        if (num2 != 0){
          result = num1/num2;
          printf("Your Final Result : %.2f\n",result);
          }
        else{
          printf("Error : Division By Zero Is Not Allowed \n");
          } 
          break;

default:
    printf("Invalid Choice Please Enter From (1-4)\n");

}
return 0;
}