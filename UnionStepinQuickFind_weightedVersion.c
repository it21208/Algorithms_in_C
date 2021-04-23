#include <stdio.h>
#define N 10000
main()
  /* This program consists a modification of the union step quick find algorithm because it uses an extra matrix sz in order to store for each 
  object where id[i]==i the number of nodes in the corresponding tree so that the union calculation can connect the smaller tree out of the 2 defined trees
  with the larger tree and therefore avoiding the formation of large paths in the trees. */
{ int i, j, p, q, id[N], sz[N];
  for (i = 0; i < N; i++)
    {
      id[i] = i; 
      sz[i] = 1; 
    }
    while (scanf("%d %d\n", &p, &q) == 2)
    {
      for (i = p; i != id[i]; i = id[i]) ;
      for (j = q; j != id[j]; j = id[j]) ; 
      if (i == j) continue;
      if (sz[i] < sz[j])
        { 
           id[i] = j;
           sz[j] += sz[i];
        }
      else
        {
          id[j] = i;
          sz[i] += sz[j];
        }
      printf(" %d %d\n", p, q);
    } 
}
