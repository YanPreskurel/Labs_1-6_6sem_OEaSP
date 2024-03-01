#include <stdio.h>
#include <stdlib.h>
#include "morse.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s input_file output_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *input_file = argv[1];
    const char *output_file = argv[2];

    if (convertToMorse(input_file, output_file)) {
        printf("Conversion successful. Output saved to %s\n", output_file);
    } else {
        fprintf(stderr, "Error during conversion.\n");
    }

    return 0;
}

