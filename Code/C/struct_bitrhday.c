#include<stdio.h>
void B_date(int x,int y,int z){
printf("My Birthday date is : %d-%d-%d \n",x,y,z);

}

int main()
{
    struct date
    {
        int day;
        int month;
        int year;

    };
    struct date birth_date={1,2,2000};;
  //  birth_date.day=1;
   // birth_date.month=1;
   // birth_date.year=2012;

    B_date(birth_date.day,birth_date.month,birth_date.year);

    return 0;

}
