#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int var;
/*	srand(time(0));
	var = rand() - RAND_MAX / 2;
    if(var > 0){
        printf("%d is positive",var);
    }else if(var < 0){
        printf("%d is negative",var);
    }
    else{
        printf("%d is  zero",var);
    }*/

    srand(time(0));
	var = rand() - RAND_MAX / 2;
	if (var == 0)
		printf("%d is zero\n", var);
	else if (var > 0)
		printf("%d is positive\n", var);
	else if (var < 0)
		printf("%d is negative\n", var);
	return (0);

    return 0;
}