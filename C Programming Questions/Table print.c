#include<stdio.h>
int main(){
    int num,x;
    printf("Enter any number : ");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        x=i*num;
        printf("%d\n",x);
    }
    

    return 0;
}