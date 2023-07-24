#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 64

char *generate_password();

int main(void)
{
    char *password = generate_password();
    printf("%s\n", password);
    free(password);

    return 0;
}

char *generate_password()
{
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *password = (char *)malloc((PASSWORD_LENGTH + 1) * sizeof(char));
    if (!password) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0';
    return password;
}
