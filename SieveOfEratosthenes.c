#define N 10000
main()
/* In mathematics, the sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to any given limit. 
   It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the first prime number, 2. ... 
   It may be used to find primes in arithmetic progressions. */
{
  int i, j, a[N];
  for (i = 2; i < N; i++) a[i] = 1;
  for (i = 2; i < N; i++)
    if (a[i])
       for (j = i; j < N/i; j++) a[i*j] = 0;
  for (i = 2; i < N; i++)
    if (a[i] printf("%4d ", i);
  printf("\n");
}
