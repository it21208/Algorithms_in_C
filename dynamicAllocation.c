#include <stdlib.h>

main(int argc, char *argv[])
{
  long int i, j, N = atoi(argv[1]);
  int *a = malloc(N*sizeof(int));
  if (a == NULL)
  {
    printf("Insufficient memory.\n");
    return;
  }
 ...
