#include "funcP5.h"

void returnName(char *input) {
    char resualt[100];
    int resualtIndex = 0, inputIndex = 0;

    while (inputIndex != strlen(input)) {
        if ((((input[inputIndex] >= 'a') && (input[inputIndex] <= 'z')) ||
             ((input[inputIndex] >= 'A') && (input[inputIndex] <= 'Z'))) &&
            (input[inputIndex + 1] == ' ')) {
            resualt[resualtIndex] = input[inputIndex];
            ++resualtIndex;
            ++inputIndex;

            resualt[resualtIndex] = ' ';
            resualtIndex++;
            continue;
        }

        if (((input[inputIndex] >= 'a') && (input[inputIndex] <= 'z')) ||
            ((input[inputIndex] >= 'A') && (input[inputIndex] <= 'Z'))) {
            resualt[resualtIndex] = input[inputIndex];

            ++resualtIndex;
            ++inputIndex;
            continue;
        }

        ++inputIndex;
    }
    resualt[resualtIndex] = '\0';
    strcpy(input, resualt);
}


void titleCaseChar(char *input) {
    for (int i = 0; input[i] != '\0'; ++i) {
        // Xủa lý kí tự đầu chuỗi
        if ((i == 0) && (input[i] >= 'a') && (input[i] <= 'z')) {
            input[i] -= 32;
            continue;
        } else if ((i == 0) && (input[i] >= 'A') && (input[i] <= 'Z')) {
            continue;
        }

        // Viết hoa những kỹ tự của đầu từ
        if ((input[i - 1] == 32) && (input[i] >= 'a') && (input[i] <= 'z')) {
            input[i] -= 32;
        }

        // Viết thường những ký tự phía trong mà viết hoa
        if ((input[i - 1] != 32) && (input[i] >= 'A') && (input[i] <= 'Z')) {
            input[i] += 32;
        }
    }
}