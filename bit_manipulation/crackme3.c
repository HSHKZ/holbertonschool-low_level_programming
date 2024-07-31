#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s password\n", argv[0]);
        return 1;
    }
    if (strcmp(argv[1], "my_secret_password") == 0) {
        printf("Congratulations!\n");
        return 0;
    } else {
        printf("Wrong password!\n");
        return 1;
    }
}
