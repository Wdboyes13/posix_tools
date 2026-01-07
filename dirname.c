#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc == 1) {
        puts(".");
    } else {
        char* dname = dirname(argv[1]);
        if (dname == NULL) {
            perror("dirname");
            return 1;
        } else {
            puts(dname);
        }
    }

    return 0;
}
