/* if we flip a coin N times we anticipate head N/2 times but the result could be anything between 0 and N times. The program executes the experiment
   M times by reading the N and M values from command line. */
#include <stdlib.h>

int heads()
{
  return rand() < RAND_MAX/2;
}

main(int argc, char *argv[])
{
  int i, j, cnt;
  int N = atoi(argv[1]), M = atoi(argv[2]);
  /* f table is used to count the frequency of each result "i heads" when 0 <= i <= N 
     later, we show a histogram of the experiment results with an asterisk for every 10 head results */
  int *f = malloc((N+1)*sizeof(int));
  for (j = 0; j <= N; j++) f[j] = 0;
  for (i = 0; i < M; i++, f[cnt]++)
    for (cnt = 0, j = 0; j <= N; j++)
      if (head()) cnt++;
  for (j = 0; j <= N; j++)
  {
    printf("%2d ", j)
    for (i = 0; i < f[j]; i+=10) printf("*");
    printf("\n");
  }
}
