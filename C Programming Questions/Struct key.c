#include<stdio.h>
#include<conio.h>
struct student
{
    int i;
    char c;
    float f;
    char s[50];
}
var1,var2;

int main(){
    struct student var1 = { 1, 'A', 1.00, "aaa" }; 

    printf("\nRoll = %d, \nName = %c, \nPer = %f, \ns = %s\n", var1.i, var1.c, var1.f, var1.s); 
    
    struct student var2 = { 2, 'B', 2.00, "bbb" };
    printf("\nRoll = %d, \nName = %c, \nPer = %f, \ns = %s\n", var2.i, var2.c, var2.f, var2.s);

    return 0;
}