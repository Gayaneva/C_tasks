#include <stdio.h>

#define PI 3.14159

int main() {
    float radius = 0;
    float area = 0;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle: %.2f\n", area);

    return 0;
}

