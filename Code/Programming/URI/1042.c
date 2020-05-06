#include<stdio.h>
void bubble_sort(int [],int);
int main()
{
    int arr[2],temp,A,B,C;
    int i,j,k;
    for(i=0;i<3;i++){
    scanf("%d",&arr[i]);
    }
    bubble_sort(arr,3);
    for(i=0;i<3;i++){
        printf("%d",arr[i]);
    }
}
