#include <stdio.h>

int main(){
    int N,a;

    printf("Enter a positive number: ");
    scanf("%d", &N);
    printf("Your input is %d\n", N);

    for(a = 1; a < N; a++){
        printf("%d\n", a);
    }

    return 0;
}