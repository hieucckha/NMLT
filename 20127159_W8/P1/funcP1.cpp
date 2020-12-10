#include "funcP1.h"

// ? A:'A' -> a:'a'

void upCaseChar(char a[]) {
    for (int i = 0; a[i] != '\0'; ++i) {
        if ((a[i] >= 'a') && (a[i] <= 'z')) {
            a[i] -= 32;
        }
    }
}

void lowCaseChar(char a[]) {
    for (int i = 0; a[i] != '\0'; ++i) {
        if ((a[i] >= 'A') && (a[i] <= 'Z')) {
            a[i] += 32;
        }
    }
}

void titleCaseChar(char a[]) {
    for (int i = 0; a[i] != '\0'; ++i) {
        // Xủa lý kí tự đầu chuỗi
        if ((i == 0) && (a[i] >= 'a') && (a[i] <= 'z')) {
            a[i] -= 32;
            continue;
        } else if ((i == 0) && (a[i] >= 'A') && (a[i] <= 'Z')) {
            continue;
        }

        // Viết hoa những kỹ tự của đầu từ
        if ((a[i - 1] == 32) && (a[i] >= 'a') && (a[i] <= 'z')) {
            a[i] -= 32;
        }

        // Viết thường những ký tự phía trong mà viết hoa
        if ((a[i - 1] != 32) && (a[i] >= 'A') && (a[i] <= 'Z')) {
            a[i] += 32;
        }
    }
}