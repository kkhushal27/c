#include <stdio.h>
int main(){


//code to calculate area of a rectangle 



  
  int length, breadth;

  printf("Enter the following values to calculate area of rectangle\n");
  printf("Enter length\n");
  scanf("%d", &length);

  printf("Enter breadth\n");
  scanf("%d", &breadth);

  printf("the area of reactangle is %d\n", length * breadth);
   

//code to calculate area of square



   int a ;

   printf("Enter the following values to calculate area of the square\n");
    printf("Enter a\n");
    scanf("%d", &a);

    printf("the area of square is %d\n", a*a);


    // code to calculate area of a circle

    int r;
    printf("Enter the following values to calculate area of the circle\n");
    printf("Enter r\n");
    scanf("%d", &r);

    printf("the area of circle with radius %d is %f\n", r, 3.14*r*r);



    // code to calculate area of a cylinder

    int radius, height;
    printf("Enter the following values to calculate area of the cylinder\n");
    printf("Enter radius\n");
    scanf("%d", &radius);

    printf("Enter height\n");
    scanf("%d", &height);

    printf("the area of cylinder is %f\n", 2*3.14*radius*radius + 2*3.14*radius*height );
    


    //code to calculate perimeter of a square 

    int side;
    printf("Enter the following values to calculate the perimeter of the square\n");
    printf("Enter side\n");
    scanf("%d", &side);

    printf("the perimeter of the square is %d\n", 4*side);

  return 0;
}