#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n[10];
    int i, j;
    // init array
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }

    for (size_t j = 0; j < 10; j++)
    {
        printf("Element[%d]=%d\n", j, n[j]);
    }
    return 0;
}
