#include <stdio.h>
int main(){
    int Userage;
printf("Enter Your Age : ");
scanf("%d",&Userage);

if (Userage<12)
{printf("Your Ticket Price Is : 200Rs ");
}

else if (Userage>=12 && Userage<=18)
{printf("Your Ticket Price Is : 300Rs ");
}

else if (Userage>18 && Userage<=60)
{printf("Your Ticket Price Is : 500Rs ");
}

else if (Userage>60)
{printf("Your Ticket Price Is : 250Rs ");
}

return 0;

}