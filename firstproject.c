#include <stdio.h>

int main() {
    double length, width, area;

    // Input the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate the area
    area = length * width;

    // Display the result
    printf("The area of the rectangle is %.1lf square units.\n", area);

    return 0
