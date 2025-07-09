#include <stdio.h>

int main() {
	 int num = 34;
	 int n = 0;
         printf("Enter n: ");
         scanf("%d", &n);

          int res = num ^ (1 << n);
          printf("The result is %d\n", res);

    return 0;
}
