#include <stdio.h>


void print_multiplication_table(int num, int limit) {
    printf("Multiplication Table of %d:\n", num);
    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num, limit;


    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the limit (e.g., 10 for 1-10): ");
    scanf("%d", &limit);


    print_multiplication_table(num, limit);

    return 0;
}
