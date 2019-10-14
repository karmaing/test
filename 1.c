#include <stdio.h>

int main(void)
{ 
    int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 },{ 5, 7 } };

    int *p;

    // p=&zippo[2][1];

    p=&zippo[2][1];

    printf("*p=%d\n",*p);

    return 0;
}