#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum(int n)
{
  /* pre-condition */
  assert(n >= 1);
  /* post-condition */
  if (n > 1)
    return n + sum(n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total)
{

  /*Pre-condition*/
  assert(n >= 1);

  /*Base Case*/
  if (n == 1) // When n == 1, the lowest number for calculation is reached, thus the recursive function is calculated correctly
  {
    return 1 + total; // The recursive step will return 1, as that is equal to the number n in the base case, as well as the total calculated thus far in the tail recursion, thus all previous calculations will be accounted for
  }
  else if (n > 1) // Recursion
  {
    return sumtail(n - 1, n + total); // The function calls itself, thus recursive. Tail recursive as it will calculate the sum of the current number and the total calculated across all steps, and finally return the sum of all values
  }
}

/* Sum integers 1 to n */
int sumwhile(int n)
{
  /*Pre-condition*/
  assert(n >= 1);

  /*Initialize variables*/
  int sum = 0;

  /*Loop that runs while n is not 0, thanks to pre-condition, n will always go towards 0*/
  while (n != 0)
  {
    sum += n; // Sum of integers plus new number to be added to sum
    n--;      // n value gets subtracted by one, so loop will terminate at some point
  }

  printf("%d\n", sum); // For testing purposes

  return sum; // Returns sum value of numbers 1 to n
}
