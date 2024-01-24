#include <stdio.h>

int main(){

    int a, i;
    char c = '-';

    printf("Please input a number: ");
    scanf("%d", &a);

    i = 0;

    /*while(i <= a){
        putchar(c);
        printf("\n");
        i++;
    }*/
    for(i=0; i < a; i++){
        putchar(c);
        printf("\n");
    }
    return 0;
}
