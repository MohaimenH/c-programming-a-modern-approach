// Computres the dimensional weight of a 12" x 10" x 8" box

#include <stdio.h>

int main()
{
    int height, length, width, volume, weight = 1; // Here, ONLY weight is 1, the others are initialized as 0.
    // int a = 2, b = 1;                              // This works.

    // float profit, loss;
    // profit = 2150.48f;

    height = 8;
    length = 12;
    width = 10;

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    // printf("Profit: %.2f\n", profit);
    return 0;
}