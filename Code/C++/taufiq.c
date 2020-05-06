#include <stdio.h>
#include <stdlib.h>
struct show
{

    float amt;
    float vat;
    float total;
    float vatamt;
    float cost_price,sell_price,result;
}show1;

void main()
{
    float i,j,sum=0,a;
    printf ("Enter selling the total product :");
    scanf("%f",&j);
    printf ("Enter all the product amount :\n");
    for(i=0;i<j;i++)
    {
        scanf("%f",&a);
        sum=sum+a;
    }
    printf ("Total amount :%f \n",sum);
    printf ("Enter the vat : ");
    scanf ("%f",&show1.vat);
    show1.vatamt=(sum*show1.vat)/100;
    printf("Total vat amount:%f",show1.vatamt);
    printf("\n");
    show1.total=sum+show1.vatamt;
    printf("Total amount (including Vat) of product :%f\n",show1.total);



    printf("Enter all product selling price :");
    scanf("%f",&show1.sell_price);

    show1.result = show1.sell_price - show1.total;

  if(show1.result > 0){
  	printf("Profit : %f\n",show1.result);}
  	else if(show1.result==0)
    {printf("Either no profit or no loss\n");
  }else{
    printf("Loss : %f\n",show1.result);
  }



    return 0;

}
