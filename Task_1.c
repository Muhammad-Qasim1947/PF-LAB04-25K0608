#include <stdio.h>
int main(){
    float Userbill;
    float Discountedprice;
printf("Enter Your Total Bill : ");
scanf("%f",&Userbill);
if (Userbill>5000)
{Discountedprice = Userbill - (Userbill * 0.1 ) ;
    printf("The Price After Discount Is : %.2f\n", Discountedprice );
}
else
printf("There Is No Discount And Your Final Bill Is : %.2f\n",Userbill);

return 0;

}
