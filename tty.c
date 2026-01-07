#include <stdio.h>
#include <unistd.h>

int main(void) {
    char* ttyn;
    if ((ttyn = ttyname(STDIN_FILENO)) != NULL) {
        puts(ttyn);
        return 0;
    } else {
        perror("tty");
        return 1;
    }
}
