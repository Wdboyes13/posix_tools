#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    bool earg = false;
    bool nl = true;
    if (argc > 1 && strcmp(argv[1], "-e")) {
        earg = true;
    }
    for (int i = 1; i < argc; i++) {
        const char* arg = argv[i];
        while (*arg != '\0') {
            if (*arg == '\\' && !earg) {
                char fmt = *++arg;
                switch (fmt) {
                    case 'a': {
                        putchar('\a');
                        break;
                    }
                    case 'b': {
                        putchar('\b');
                        break;
                    }
                    case 'c': {
                        nl = false;
                        break;
                    }
                    case 'f': {
                        putchar('\f');
                        break;
                    }
                    case 'n': {
                        putchar('\n');
                        break;
                    }
                    case 'r': {
                        putchar('\r');
                        break;
                    }
                    case 't': {
                        putchar('\t');
                        break;
                    }
                    case 'v': {
                        putchar('\v');
                        break;
                    }
                    case '\\': {
                        putchar('\\');
                        break;
                    }
                }
                arg++;
            } else {
                putchar(*arg++);
            }
        }
    }
    if (nl) {
        putchar('\n');
    }
}
