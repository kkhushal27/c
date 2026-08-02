#include <stdio.h>
int main (){
    int age = 2;
    switch(age){
        case 1:
            printf("the age is 1");
            break;
        case 2:
            printf("the age is 2");
            break;
        case 3:
            printf("the age is 3");
            break;
        default:
            printf("the age is not between 1 and 3");
    }
    return 0;
}