// Computres the dimensional weight of a box from input provided by user.

#include <stdio.h>

#define INCHES_PER_POUND 166               // Macro definition - Pre-processor replaces each instance of this with the value
#define RECIPROCAL_OF_PI (1.0f / 3.14159f) // Can also include expression in brackets

int main()
{
    int height, length, width, volume, weight; // Here, ONLY weight is 1, the others are initialized as 0.

    printf("Enter of height box: ");
    scanf("%d", &height);
    printf("Enter of length box: ");
    scanf("%d", &length);
    printf("Enter of width box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / INCHES_PER_POUND;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}