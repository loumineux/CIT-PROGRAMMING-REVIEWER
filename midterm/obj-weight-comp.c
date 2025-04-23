#include <stdio.h>

void compareWeights(float *w1, float *w2, float *heavier, float *difference);

int main(void)
{
    float w1, w2, heavier, difference;
    printf("Enter the weights: ");
    scanf("%f %f", &w1, &w2);

    compareWeights(&w1, &w2, &heavier, &difference);

    printf("Heavier weight: %.2f kg\n", heavier);
    printf("Weight difference: %.2f kg\n", difference);

    return 0;
}

void compareWeights(float *w1, float *w2, float *heavier, float *difference)
{
    float light;
    if (*w1 > *w2)
    {
        *heavier = *w1;
        light = *w2;
    }
    else
    {
        *heavier = *w2;
        light = *w1;
    }

    *difference = *heavier - light;
}