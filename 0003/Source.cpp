#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void answer(int* num0, int* num1);
long x[100][100], y[100][100];
int main()
{
    int num[2], loop1, loop2;
    int* p1, * p2;
    scanf("%d %d", &num[0], &num[1]);


    for (loop1 = 0; loop1 < num[0]; loop1++)
    {
        for (loop2 = 0; loop2 < num[1]; loop2++)
        {
            scanf("%ld", &x[loop1][loop2]);
        }
    }
    for (loop1 = 0; loop1 < num[0]; loop1++)
    {
        for (loop2 = 0; loop2 < num[1]; loop2++)
        {
            scanf("%ld", &y[loop1][loop2]);
        }
    }
    answer(&num[0], &num[1]);
    return 0;
}
void answer(int* num0, int* num1)
{
    int loop1, loop2, p1, p2;
    for (loop1 = 0; loop1 < *num0; loop1++)
    {
        for (loop2 = 0; loop2 < *num1; loop2++)
        {
            p1 = x[loop1][loop2];
            p2 = y[loop1][loop2];
            printf("%d ", p1 + p2);
        }
        printf("\n");
    }
}
