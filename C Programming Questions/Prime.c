#include <stdio.h>
int main(){
    int num;

    printf("Enter Number : ");
    scanf("%d",&num);

    if (num > 1)
    {
        for (int i = 2; i < num/2; i++)
        {
            if (num%i==0)
            {
                printf("Not");
                break;
            }else
                printf("Yes");
            
        }
        
    }
    else
        printf("Not");
    
    return 0;
}