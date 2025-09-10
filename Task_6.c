#include <stdio.h>
#include <string.h>
int main(){
    int UserAge;
    printf("Enter your Age: ");
    scanf("%d",&UserAge);

    if (UserAge>18)
{printf("You Are Eligible For Voting");
}
else 
printf("You Are Not Eligible For Voting");

return 0;

}
