#include <stdio.h>

void print_fibonacci_sequence();

int main() {
    print_fibonacci_sequence();
    return 0;
}

void print_fibonacci_sequence() {
    int count, num1 = 1, num2 = 2, next_num;

    printf("%d, %d, ", num1, num2);  // Printing the first two Fibonacci numbers

    for (count = 3; count <= 100; ++count) {
        next_num = num1 + num2;
        printf("%d", next_num);

        if (count < 100) {
            printf(", ");
        }

        num1 = num2;
        num2 = next_num;
    }

    printf("\n");
}
