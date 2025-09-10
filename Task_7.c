#include <stdio.h>
#include <string.h>
int main(){
    char Userpassword [15];
printf("Enter Your Password : ");
scanf("%s",&Userpassword);

if (strcmp(Userpassword,"1234")==0)
{printf("The Access Has Been Granted");
}
else
printf("The Access Has Been Denied");

return 0;

}