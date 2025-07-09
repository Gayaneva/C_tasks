#include <stdio.h>

int main(){
	int num = 0;
	printf("Enter a number");
	scanf("%d", &num);

	int res = 1 << num;
	printf("The power of 2 is %d" , res);

	return 0;
}
