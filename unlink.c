#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Not enough arguments provided\n");
        printf("unlink <file>\n");
        return 1;
    }

    if (unlink(argv[1]) < 0) {
        perror("unlink");
        return 1;
    }

    return 0;
}
