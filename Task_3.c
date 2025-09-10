#include <stdio.h>
int main(){
    int num1,num2,num3,largest;

    printf("Enter Num 1 : ");
    scanf("%d",&num1); 
    printf("Enter Num 2 : ");
    scanf("%d",&num2); 
    printf("Enter Num 3 : ");
    scanf("%d",&num3); 

if (num1>=num2){
    if (num1>=num3){
       largest = num1;  // num1 is the largest  
    } else {
       largest = num3;  // num3 is the largest
    }
    
} else {
    if (num2>=num1){
       largest = num2;   // num2 is the largest
    } else {
       largest = num3;    // num3 is the largest
    }
}    
printf("The Largest Number Is : %d\n",largest);

return 0;

}

