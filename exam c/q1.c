#include <stdio.h>


void check_even_odd(int num) {

    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
}

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);


    check_even_odd(num);

    return 0;
}
