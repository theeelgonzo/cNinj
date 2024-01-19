#include <stdio.h>

int main() {

    int a,b;
    printf("Enter a positive integer: ");
    scanf("%d",&b);

    for(a=0; a<b; a++){
        printf("Coundown: %d\n", b - a);
    }

    return 0;
}
