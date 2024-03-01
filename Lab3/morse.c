#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "morse.h"

const char *charToMorse(char ch) {
    switch (toupper(ch)) {
        case 'A': return ".- ";
        case 'B': return "-... ";
        case 'C': return "-.-. ";
        case 'D': return "-.. ";
        case 'E': return ". ";
        case 'F': return "..-. ";
        case 'G': return "--. ";
        case 'H': return ".... ";
        case 'I': return ".. ";
        case 'J': return ".--- ";
        case 'K': return "-.- ";
        case 'L': return ".-.. ";
        case 'M': return "-- ";
        case 'N': return "-. ";
        case 'O': return "--- ";
        case 'P': return ".--. ";
        case 'Q': return "--.- ";
        case 'R': return ".-. ";
        case 'S': return "... ";
        case 'T': return "- ";
        case 'U': return "..- ";
        case 'V': return "...- ";
        case 'W': return ".-- ";
        case 'X': return "-..- ";
        case 'Y': return "-.-- ";
        case 'Z': return "--.. ";
        case '0': return "----- ";
        case '1': return ".---- ";
        case '2': return "..--- ";
        case '3': return "...-- ";
        case '4': return "....- ";
        case '5': return "..... ";
        case '6': return "-.... ";
        case '7': return "--... ";
        case '8': return "---.. ";
        case '9': return "----. ";
        default: return "";
    }
}

int convertToMorse(const char *input_file, const char *output_file) {
    FILE *input = fopen(input_file, "r");
    FILE *output = fopen(output_file, "w");

    if (input == NULL || output == NULL) {
        perror("Error opening files");
        return 0;
    }

    char ch;
    while ((ch = fgetc(input)) != EOF) {
        if (isalnum(ch)) {
            fprintf(output, "%s", charToMorse(ch));
        }
    }

    fclose(input);
    fclose(output);

    return 1;
}

