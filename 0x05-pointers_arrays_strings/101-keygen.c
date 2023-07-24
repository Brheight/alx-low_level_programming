#include <stdlib.h>
#include <time.h>

int main() {
  int password_length = 10;
  char password[password_length];

  srand(time(NULL));

  for (int i = 0; i < password_length; i++) {
    password[i] = rand() % 126 + 1;
  }

  printf("The generated password is: %s\n", password);

  return 0;
}
