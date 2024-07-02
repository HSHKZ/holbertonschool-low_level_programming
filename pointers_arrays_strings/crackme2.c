#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "abc123";
    char input[64];

    printf("Enter password: ");
    fgets(input, sizeof(input), stdin);

    // Supprimer le caractère de nouvelle ligne de fgets
    input[strcspn(input, "\n")] = '\0';

    if (strcmp(input, password) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied!\n");
    }

    return 0;
}
