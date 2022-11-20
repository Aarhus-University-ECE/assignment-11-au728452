#include "sumn.h"

#include <stdio.h>
#include <assert.h>

int sumn(int n)
{

    /*Pre-Condition*/
    assert(n >= 1);

    /*Recusrion*/
    if (n > 1)
    {
        return 2 * n - 1 + sumn(n - 1); // Recursion will calculate 2 * n - 1 as shown in the proof, the recursive step comes in when it calls the function again but for the number n - 1, thus moving towards the base case
    }
    /*Base Case*/

    if (n == 1) // Recursion will reach n = 1, and per the precondition, the recursive function will be done correctly
    {
        return 1;
    }
}