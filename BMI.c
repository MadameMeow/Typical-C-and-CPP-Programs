#include <stdio.h>
#include <stdlib.h>

int main()
{
     float height;
     float weight;
     float BMI;

     printf("please enter your height according to meter : ");
     scanf("%f",&height);

     printf("Please enter your weight according to kilogram : ");
     scanf("%f",&weight);

     BMI=((weight)/(height*height));

     if ( BMI < 16.5 )
        printf("Very severely underweight");

     else if ( 16.5 <= BMI && BMI < 18.5 )
        printf("Underweight");

     else if ( 18.5 <= BMI && BMI < 25 )
        printf("Normal");

     else if ( 25 <= BMI && BMI < 30 )
        printf("Overweight");

     else if ( 30 <= BMI && BMI < 35 )
        printf("Obese class1");

     else if ( 35 <= BMI && BMI < 40 )
        printf("Obese class2");

     else if ( BMI > 40 )
        printf("Obese class3");
     else
        printf("Error");

    return 0;
    }

