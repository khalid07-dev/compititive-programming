#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    gets(a);
    if (a[10]=="vertebrado")
    {
        char b[10];
        gets(b);
        if(b[10]=="ave")
        {
            char c[10];
            gets(c);
            if(c[10]=="carnivoro")
            {
                printf("aguia\n");
            }
            else if(c[10]=="onivoro")
            {
                printf("pomba\n");
            }
        }
        else if(b[10]=="mamifero")
        {
            char c[10];
            gets(c);
            if(c[10]=="onivoro")
            {
                printf("homem\n");
            }
            else if(c[10]=="herbivoro")
            {
                printf("vaca\n");
            }

        }


    }
    else if(a[10]=="invertebrado")
    {
        char b[10];
        gets(b);
        if(b[10]=="inseto")
        {
            char c[10];
            gets(c);
            if(c[10]=="hematofago")
            {
                printf("pulga\n");
            }
            else if(c[10]=="herbivoro")
            {
                printf("lagarta\n");
            }


        }
        else if(b[10]=="anelideo")
        {
            char c[10];
            gets(c);
            if(c[10]=="hematofago")
            {
                printf("sunguessuga\n");
            }
            else if(c[10]=="onivoro")
            {
                printf("minhoca\n");
            }

        }

    }
    return 0;

}
