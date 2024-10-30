#include<stdio.h>
int main(){
    int num;
    for (int i = 0; i < 1; i--)
    {
    printf("\nEnter 1-7 Number : ");
    scanf("%d",&num);
    switch (num){
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        break;
    }
    }
    return 0;
}