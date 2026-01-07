#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    switch (argc) {
        case 1: {
            puts(".");
        }
        case 2: {
            char* bname = basename(argv[1]);
            if (bname == NULL) {
                perror("basename");
                return 1;
            } else {
                puts(bname);
            }
        }
        case 3: {
            char* bname = basename(argv[1]);
            if (bname == NULL) {
                perror("basename");
                return 1;
            }
            char* suf;
            if ((suf = strstr(bname, argv[2])) != NULL) {
                size_t pr_len = strlen(bname) - strlen(suf);
                for (size_t i = 0; i < pr_len; i++) {
                    putchar(bname[i]);
                }
                putchar('\n');
            }
        }
    }
    return 0;
}
