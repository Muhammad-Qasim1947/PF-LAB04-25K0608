#include <stdio.h>
int main(){
    int balance,withdrawal;
    printf("Enter Your Balance : ");
    scanf("%d",&balance);
    printf("Enter Amount To Withdrawl : ");
    scanf("%d",&withdrawal);


    if (balance>withdrawal && withdrawal % 500 == 0)
{ printf ("Withdraw of %d is successful\n ",withdrawal);
    balance = balance - withdrawal;
  printf("Remaining Balance: %d\n",balance);  
    }

    else {
  printf("Withdrawal Rejected\n");

    if (balance<=withdrawal)
{ printf("Insufficient Balance\n");
    }

    if (withdrawal % 500 != 0)
{ printf("Balance Should Be Multiple Of 500\n");
    }
  }
    return 0;
}