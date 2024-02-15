#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void A(char M[])
{
    int n = rand() % 3;
    switch (n)
    {
    case 0:
        strcat(M, "b");
        A(M);
        break;
    case 1:
        strcat(M, "c");
        A(M);
        break;
    case 2:
        strcat(M, "d");
        printf("%s\n", M);
    }
}

void S()
{
    char M[100] = "";
    strcat(M, "a");
    A(M);
}

int main()
{
    srand(time(NULL));
    S();
    return 0;
}