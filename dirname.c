#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc > 2) {
        fprintf(stderr, "To many arguments were provided\n");
        fprintf(stderr, "dirname [string]\n");
        return 1;
    }

    if (argc == 1) {
        puts(".");
    } else {
        puts(dirname(argv[1]));
    }

    return 0;
}
