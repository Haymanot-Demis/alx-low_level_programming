#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int var;
	srand(time(0));
	var = rand() - RAND_MAX / 2;
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