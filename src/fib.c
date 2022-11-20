/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h> /* assert */
#include <stdio.h>  /* printf */

/* Fibonacci function definition */

int fib_tail(int n, int p, int pp)
{

    /*Special cases*/
    /*Since I made my function so that it will calculate FROM step 2,
    it will not return a value if you want to find the first or second
    number in the fibbonacci sequence, thus I make it so if input n ==
    1 or 2, it will return the value 1, being the 1st and second number
    of the sequence.*/
    if (n == -1 || n == 0)
    {
        return 1;
    }

    /*Pre-condition*/
    assert(n > 0);

    /*Base case*/
    if (n == 1) // When n reaches its lowest value, being 1 as per our pre-condition, it will return the calculation for the lowest step being the third step, which will be calculated by adding p and pp, thus calculation fibbonacci correctly
    {
        return p + pp;
    }
    else
    {
        return fib_tail(n - 1, p + pp, p); // Recusrion - Will call function for n - 1 each time, and give p the value of p + pp, and will give pp the value of the p of the previous step, this way the algorithm shuffles through the numbers to add together in the fibbonacci sequence
    }
}

int fib(int n) // For the purposes of making the input for the function cleaner, making it so you only need to input the number of the fibonacci sequence you want, and not the other elements of the tail recursive function
{
    return fib_tail(n - 2, 1, 1); // Function will call the tail recursive function with the previous and previous previous numbers being 1, which are the values of the first two numbers in the fibonacci sequence. This being the case, i set the n value to be n - 2, as we have already "calculated" the first two numbers of the sequence
}
