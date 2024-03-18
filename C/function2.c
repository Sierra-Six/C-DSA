#include<stdio.h>
#include<math.h>
// int main(){
//      int n=4;
//      printf("%f\n",pow(n,2));  //%f is used as pow function is double type so takes more space than integer type
// }

// write functions to calculate area of a square,a circle & a rectangle

float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a,float b);

int main(){
       float a=5,b=10;
       printf("area of rectangle is %f\n",rectanglearea(a,b));
       float radius=5;
       printf("area of circle is %f\n",circlearea(radius));
       //area of square can be calculated like this
       return 0;
}

float squarearea(float side){
    return side*side;
}
float circlearea(float radius){
    return 3.14*radius*radius;
}
float rectanglearea(float a,float b){
    return a*b;
}

