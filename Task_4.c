#include <stdio.h>
int main(){
    int Usersalary;
    int Userage;

printf("Enter Your Age : ");
scanf("%d",&Userage);

if (Userage>=25)
{printf("Enter Your Salary : ");
    scanf("%d",&Usersalary);
   
if (Usersalary>=45000)
{printf("Your Loan Is Approved");
   
}
else 
printf("Your Loan Is Not Approved");   
    
}
else
printf("Your Loan Is Not Approved");

return 0;

}