#include <stdio.h>
#include "apples.h"
#include "oranges.h"

int main()
{
    oranges_set(5);
    apples_set(4);

    printf("apples = %d, oranges = %d\n", apples_get(), oranges_get());

    return 0;
}