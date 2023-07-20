#include <stdio.h>

long largest_prime(long n) {
  long largest_prime = -1;
  for (long i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      largest_prime = i;
      n /= i;
    }
  }
  return largest_prime;
}

int main(void) {
  long n = 612852475143;
  long largest_prime_factor = largest_prime(n);
  printf("%ld\n", largest_prime_factor);
  return 0;
}
