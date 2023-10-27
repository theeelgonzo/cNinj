#include <stdio.h>

int main(){
    char string[50];
    char newArray[50];
    newArray[49] = '\0';
    int i=0;
    printf("Enter the sentence: ");
    gets(string);
    while(string[i] != '\0') {
        //printf("ASCII Value of %c=%d\n", string[i],string[i]);
        printf("%d ",string[i]);
        //newArray[i] = (int)string[i];
        i++;
    }

    //puts(newArray);
    //getch();
    return 0;

}
