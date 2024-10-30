#include<stdio.h>
int main(){
    int num;
    printf("Enter any no : ");
    scanf("%d",&num);

    for (int i = 2; i <= num; i+=2)
    {
        printf("%d\n",i);
    }
    
    return 0;
}