#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float a;
   float b;
   float c;
   float d;

   float f;
   float g;
   float h;

   float m;
   float m2;
   float n;
   float n2;
   float k;
   float r;
   float rc;

   float x1;

   float x2;
   float x2_part1;
   float x2_part2;
   float x2a, x2b, x2c;

   float x3;
   float x3_part1;
   float x3_part2;

   float theta = 0;
   float sign;
   float dans;

   printf("A cubic function is a function of the form \"ax^3 + bx^2 + cx + d\"\n");
   printf("Now, Enter number a (which is nonzero): ");
   scanf("%f", &a);

   if ( a == 0 )
   {
      printf("Error: \"a\" must not be zero, try again: ");
      scanf("%f", &a);

   }
   printf("Enter number b: ");
   scanf("%f", &b);
   printf("Enter number c: ");
   scanf("%f", &c);
   printf("Enter number d: ");
   scanf("%f", &d);


   f = ( ( (3*c) / a ) - ( (b*b) / (a*a) ) ) / 3;

   g = ( ( (2*b*b*b) / (a*a*a) ) - ( (9*b*c) / (a*a) ) + ( (27*d) / a ) ) / 27;

   h = ( (g*g) / 4 ) + ( (f*f*f) / 27 );

   if ( h > 0 )
   {
     m = (-g / 2) + sqrt(h);
     k = 1;

     if ( m < 0 )
     {
        k = -1;
     }
     else
     {
        k = 1;
     }
     m2 = cbrt(m*k);
     m2 = m2 * k;
     k = 1;
     n = (-g / 2) - sqrt(h);

     if ( n < 0 )
     {
        k = -1;
     }
     else
     {
        k = 1;
     }
     n2 = cbrt(n*k);
     n2 = n2 * k;
     k = 1;

     x1 = (m2 + n2) - ( b / (3*a) );

     x2_part1 = ( ( -(m2 + n2) ) / 2 ) - ( b / (3*a) );
     x2_part2 = ( ( (m2 - n2)  / 2 ) * sqrt(3) );

     x3_part1 = ( ( -(m2 + n2) ) / 2 ) - ( b / (3*a) );
     x3_part2 = ( (m2 - n2)  / 2 ) * ( sqrt(3) );

     printf("\nx1 = %f\n", x1);

     printf("x2 = %f", x2_part1);
     printf(" + %f", x2_part2);
     printf(" * i \n");

     printf("x3 = %f", x3_part1);
     printf(" - %f", x3_part2);
     printf(" * i \n");
   }
   if ( h <= 0 )
   {
      r = sqrt( ( (g*g) / 4 ) - h );
      k = 1;

      if ( r < 0 )
      {
         k = -1;
      }
      rc = cbrt(r*k) * k;
      k = 1;
      theta = acos ( ( -g / (2*r) ) );

      x1 = ( (2 * ( rc * (cos (theta / 3) ) ) )- (b / (3*a)) );

      x2a = rc * (-1);
      x2b = cos(theta / 3);
      x2c = sqrt(3) * sin (theta / 3);

      x2 = ( (x2a * (x2b + x2c)) - (b / (3*a)) );
      x3 = ( (x2a * (x2b - x2c)) - (b / (3*a)) );

      printf("x1 = %f\nx2 = %f\nx3 = %f", x1, x2, x3);
   }
   if ( (f + g + h) == 0 )
   {
      if ( d < 0 )
         sign = -1;
      if ( d >= 0 )
         sign = 1;
      if ( sign > 0 )
      {
         dans = cbrt (d / a);
         dans = dans * (-1);
      }
      if ( sign < 0 )
      {
         d = d * (-1);
         dans = cbrt (d / a);
      }
      x1 = x2 = x3 = dans;
      printf("x1 = %f\nx2 = %f\nx3 = %f", x1, x2, x3);
   }

    return 0;
}
