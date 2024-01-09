#include <stdio.h>

int main(){

    int i;
    char c;
    i=0;
    while(i<26){
        c = i + 65;
        printf("%s", &c);
        ++i;}
    return 0;
}
