#include<stdio.h>
int main()
{
    int i;
    float f1,f2,f3,f4,avg;
    scanf("%f%f%f%f",&f1,&f2,&f3,&f4);
    avg=((f1*2)+(f2*3)+(f3*4)+(f4*1))/10;
    printf("Media: %.1f\n",avg);
    if (avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
   else if (avg<5)
    {
        printf("Aluno reprovado.\n");
    }
   else if (avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");

            float ano,avg2;
            scanf("%f",&ano);
            printf("Nota do exame: %.1f\n",ano);
            avg2=(ano+avg)/2;
            if (avg2>=5.0)
            {
                printf("Aluno aprovado.\n");
            }
             if (avg2<=4.9)
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n",avg2);
    }
    else{
     return 0;
    }

}
