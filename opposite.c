#include <stdio.h>

int main(){
        int num = 0;
        printf("Enter a number");
        scanf("%d", &num);

        num  = ~num + 1;
        printf("The opposite of number is  %d" , num);

        return 0;
}
