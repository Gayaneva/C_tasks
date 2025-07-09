#include <stdio.h>

int main() {
    int num = 0;
    int cube = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;

    printf("Cube: %d\n", cube);

    return 0;
}

