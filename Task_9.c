#include <stdio.h>
int main(){
    int Userattendance;
    int Usermarks;

printf("Enter Your Attendance : ");
scanf("%d",&Userattendance);

if (Userattendance >=75 )
{printf("Enter Your Marks : ");
    scanf("%d",&Usermarks);
   
if (Usermarks>=40)
{printf("You Can Appear In The Final Exams");
   
}
else 
printf("You Cannot Appear In The Final Exams");   
    
}
else
printf("You Cannot Appear In The Final Exams");

return 0;

}
