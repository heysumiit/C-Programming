#include<stdio.h>
int main(){
    int num;
    printf("Enter any Number Greater than Five: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++){
    if (i==5){
        break; //Break are use to end the loop for specific value or number.
    }else
        printf("%d",i);
    }
    return 0;
}