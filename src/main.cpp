extern "C"
{
// Add the header files required to run your main
#include "sum.h"
#include <assert.h>
#include "fib.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{

    assert(sumtail(5, 0) == 15);

    assert(sumwhile(5) == 15);
    // assert(sumwhile(0) == 0);
    // assert(sumwhile(-1) == 0);

    assert(fib(3) == 2);

    return 0;
}