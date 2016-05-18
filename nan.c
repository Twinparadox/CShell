#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int dec, hund, one;
        int sum;

        srand((unsigned)time(NULL));
        hund= rand()%9 + 1;

        do
        {
                dec=rand()%9 + 1;
                one=rand()%9 + 1;
        }while (one==dec || one==hund || dec==hund);

        sum = hund * 100 + dec * 10 + one;
        printf("%d\n",sum);
}
