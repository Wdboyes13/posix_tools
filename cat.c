#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void rdclose(int fileno) {
    if (fileno != STDIN_FILENO) {
        close(fileno);
    }
}

void rdprint(const char* fname) {
    int fileno;
    if (strcmp(fname, "-") == 0) {
        fileno = STDIN_FILENO;
    } else {
        if ((fileno = open(fname, O_RDONLY)) < 0) {
            perror("open");
            exit(1);
        }
    }

    while (1) {
        char c;
        size_t rd = read(fileno, &c, 1);
        if (rd == 0) {
            rdclose(fileno);
            break;
        } else if (rd < 0) {
            perror("read");
            rdclose(fileno);
            exit(1);
        } else {
            putchar(c);
        }
    }
}

int main(int argc, char** argv) {
    for (int i = 1; i < argc; i++) {
        rdprint(argv[i]);
    }
    return 0;
}
