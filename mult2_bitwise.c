#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int res = (num << 1);
    printf("The result is %d\n", res);

    return 0;
}
