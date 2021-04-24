/* a cycle from 1 until N, with x pointing to node N
   later starting from 1 we skip M-1 nodes, we define the link of M-1 node in order to skip the Mth node and we continue with this strategy
   until there is only 1 node left in the list. */
#include <stdlib.h>
typedef struct node* link;
struct node
{
  int item;
  link next;
};

main(int argc, char *argv[])
{
   int i, N = atoi(argv[1]), M = atoi(argv[2]);
  link t = malloc(sizeof *t), x = t;
  t->item = 1; t->next = t;
  for (i = 2; i <= N; i++)
    {
      x = (x->next = malloc(sizeof *x));
      x->item = i; x->next = t;
    }
  while (x != x->next)
    {
      for (i = 1; i < M; i++) x = x->next;
      x->next = x->next->next; N--;
    }
  printf("%d\n", x->item);
}
