#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int main() {
    char message[] = "_putchar\n";

    for (int i = 0; message[i] != '\0'; i++) {
        _putchar(message[i]);
    }

    return 0;
}

