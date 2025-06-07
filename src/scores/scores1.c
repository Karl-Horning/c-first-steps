#include <stdio.h>

const int N = 3;

float average(int array[]);

int main(void)
{
    int scores[N];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    
    printf("Average: %f\n", average(scores));
    printf("Done!!!");
}

float average(int array[])
{
    int total = 0;

    for (int i = 0; i < N; i++)
    {
        total += array[i];
    }
    return total / (float) N;
}