#include<stdio.h>
int main(){
    int var;
    printf("Enter an integer: ");
    scanf("%d",&var);
    if(var > 0){
        printf("%d is positive",var);
    }else if(var < 0){
        printf("%d is negative",var);
    }
    else{
        printf("%d is  zero");
    }

    return 0;
}