#include <stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter a Number : ");
    scanf("%d",&num);

    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);
    



    return 0;
}