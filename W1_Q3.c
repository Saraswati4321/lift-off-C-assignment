#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num%2;
    switch(n){
        case 0:{
            printf("Even Number \n");
            break;
        }
        case 1:{
            printf('Odd Number \n');
            break;
        }
        return 0;



    }













}