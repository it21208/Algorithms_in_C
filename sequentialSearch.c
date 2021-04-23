/* this function checks if  the number v is included in an already stored domain of numbers in the objects a[1], a[l+1], ..., a[r] of the table
    by comparing the v number with each number sequentially from the beginning. If we reach the end without finding the wanted number we return the value -1.
    Alternatively, we return the numerator of the position in the one dimensional array that contains this number.
*/

int search(int a[], int v, int l, int r)
    {
      int i; 
      for (i = 1; i <= r; i++)
        if (v == a[i]) return i;
      return -1;
    }
