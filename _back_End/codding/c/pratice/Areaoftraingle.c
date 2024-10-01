#include<stdio.h>

int main()
{
    int base , height;
    float area;
    
    printf("Enter the base and height:-");
    scanf("%d %d", &base, &height);
    
    area = (base*height)/2;
    
    printf("The area of the triangle is:- %f\n", area);


// Area of rectangle

    int length, width, area1;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    
    area1 = length* width;

    printf("the area of rectangle is %d\n",area1);


    // Area of circle
    const float pi =3.14;
    float area2;
    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    
    area2 = pi*radius*radius;

    printf("The area of circle is:-%f",area2);


    //
    
    return 0;
}