#include <stdio.h>


void printPattern(int n) {
    int i, j, k;


    for (i = 1; i <= n; i++) {

        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }


        for (k = 2; k <= i; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }
}

int main() {
    int n;


    printf("Enter the number of rows: ");
    scanf("%d", &n);


    printPattern(n);

    return 0;
}
