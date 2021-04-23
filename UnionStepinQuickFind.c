/* The connectivity problem is a fundamental problem in graph theory.  
   The Quick find algorithm provides a solution to the connectivity problem.
*/

#include <stdio.h>
/* we define Ν as a compilation time constant for simplicity reasons, this could have been read from standard input and then
  allocate memory for table i dynamically using the malloc() function which takes a single parameter the size of the requested memory area in bytes*/
#define N 10000
main()
  { 
    int i, p, q, t, id[N];
    for (i = 0; i < N; i++) id[i] = i;
    /* reading from the standard input a sequence of pairs of non-negative integers that are less than N
    interpreting the pair p q as "a connection of the object p with the object q" and displaying the pairs that represent those objects that are not yet connected */
    while (scanf("%d %d\n", &p, &q) 
      {
        /* the program keeps the table id so that it includes one entry for each object and ensure that id[p] and id[q] are equal 
        if and only if p and q are connected  */
        for (i = p; i != id[i]; i = id[i]) ;
        for (j = q; j != id[j]; j = id[j]) ;
        if (i == j) continue;
        id[i] = j;
        printf(" %d %d\n", p, q);
      }
  }
