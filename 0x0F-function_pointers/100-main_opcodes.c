#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, len;
    unsigned char *code;

    if (argc != 2) {
        fprintf(stderr, "Error\n");
        exit(1);
    }

    len = atoi(argv[1]);
    if (len < 0) {
        fprintf(stderr, "Error\n");
        exit(2);
    }

    code = (unsigned char *)main;

    for (i = 0; i < len; i++) {
        printf("%02x ", code[i]);
    }
    printf("\n");

    return (0);
}
