#include<stdio.h>
int main(){
    int num,sum=1;

    printf("Enter any number : ");
    scanf("%d",&num);
    if (num==0){
        printf("1");
    }
    else if (num==1){
        printf("1");
    }
    else{
        for (int i = 1; i <= num; i++){
            sum = sum*i;
        }
        printf("%d\n",sum);
        }

    return 0;
}