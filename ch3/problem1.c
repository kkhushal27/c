#include <stdio.h>
int main(){
// code to check whter year is leap year or not
    int year;

    printf("Enter the Year: \n");
    scanf("%d", &year);

if ( (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
printf("its a leap year");

else {
    printf("its not a leap year");
}


    return 0;
}