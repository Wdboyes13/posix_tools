#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
    if (argc < 3) {
        fprintf(stderr, "Not enough arguments provided\n");
        printf("link <file1> <file2>\n");
        return 1;
    }

    if (link(argv[1], argv[2]) < 0) {
        perror("link");
        return 1;
    }

    return 0;
}
