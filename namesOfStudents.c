#include <stdio.h>

int main(){
    // declaring a variable.
    int a;
    char nameOfStudent[50];

    // initialized a varible for numbering the students.
    int numbering[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Name entering loop
    for(a = 1; a < 11; a++){
        printf("Enter a student's name: ");
        scanf("%[^\n]%*c", nameOfStudent);
        printf("Student %d name is: %s\n", numbering[a], nameOfStudent);
    }

    return 0;
}