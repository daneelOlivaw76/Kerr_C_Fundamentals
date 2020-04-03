#include <stdio.h>

void apples_set(int value);
int apples_get();

int main()
{
    int oranges = 4;
    apples_set(5);

    printf("apples = %d, oranges = %d\n", apples_get(), oranges);

    return 0;
}