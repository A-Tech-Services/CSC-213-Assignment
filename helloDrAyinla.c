#include <stdio.h>

int main(){

    char lecName[50];
    printf("What is your lecturer's name?\n");
    scanf("%[^\n]%*c", lecName);
    printf("Hello World %s\n", lecName);


    return 0;
}