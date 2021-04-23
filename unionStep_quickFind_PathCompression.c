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
      /* By changing the for loops with the indicated lines of code below we decrease the length of each path we have to cross by half. 
         The end result of this change is that after a long sequence of operations the trees end up almost flat. */
      for (i = p; i != id[i]; i = id[i])
        id[i] = id[id[i]]; /* 1 */
      for (j = q; j != id[j]; j = id[j])
        id[j] = id[id[j]]; /* 2 */
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
/* the above algorithm follows a maximum of 2logN indicators to identify if 2 out of the N objects are connected 
    when combining a domain of i nodes with another domain consisting of j nodes and the following condition i <= j applies
    we increase by 1 the number of indexes that must be followed in the smaller domain which now belong in a domain with size i + j
    because 1 + lg i = lg(i+i) <= lg(i + j)
*/ 
