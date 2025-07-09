#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	printf("Enter 2  number");
	scanf("%d""%d", &num1, &num2);
	
	num1 = num1 ^ num2;// ete tivy nuyn tvi het 2 angam xor anenq nuyny kmna
	num2 = num1 ^ num2;
	num1 = num2 ^ num1; 
	printf("%d""%d", num1, num2);
	
	return 0;
}
