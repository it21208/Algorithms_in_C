/* calculate the average value μ and the standard deviation σ of sequence x1, x2, ..., Xn 
   of random numbers that have been generated from rand process */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* we use typedef to specify the fact that the data type is int */
typedef int numType;

Number randNum()
{
  return rand();
}

main(int argc, char *argv[])
{
  int i, N = atoi(argv[1]);   /* atoi is a function in the C programming language that converts a string into an integer numerical representation */
  float m1 = 0.0, m2 = 0.0;
  Number x;
  for (i = 0; i < N; i++)
    {
      x = randNum();
      m1 += ((float) x)/N;   /* casts x to float before division */
      m2 += ((float) x*x)/N; /* casts x to float before division */
    }
  printf("       Average: %f\n", m1);
  printf("Std. deviation: %f\n", sqrt(m2-m1*m1));
}
