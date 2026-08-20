#include <stdio.h>
int main(){
printf ("hello world\n"); // using print command
// added a comment in code 
/*
use this for inserting multi line comments
*/
int a;
a = 1 ; // setting up a variable , variables store value in them and as a container

float b;
b = 3.14; // float is used to store decimal values

char c;
 c ='a'; // char stores character value or a word

  // commands for printing int,float or char values
  printf("%d\n",a); // for printing int value
  printf("%f\n",b); // for printing float value
  printf("%c\n",c); //for printing a char value



  //making code to measure area of a rectangle
  int length, breadth;
  printf("Enter length\n");
  scanf("%d", &length);

  printf("Enter breadth\n");
  scanf("%d", &breadth);

  printf("the area of reactangle is %d", length*breadth);

    return 0;
}