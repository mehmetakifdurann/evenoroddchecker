//
//main.c
//
//This program checks if the given number by the user is odd or even.

//By Mehmet Akif Duran

#include <stdio.h>

int main () {
    
    //defining and getting the input;
    
    int number1;
    
    printf("Please enter the number that you want to check \n");
    scanf("%d", &number1);
    
    //checking the remainder and printing that is odd or even:
    
    if (number1 % 2 == 0 ) {
        printf("The value that you entered is even. \n");
    }else {
        printf("The value that you entered is odd \n");
    }
    

    
    return 0;
}
