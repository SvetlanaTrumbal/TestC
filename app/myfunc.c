#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    if (buffer == NULL) {
        // LCOV_EXCL_START
        return -1;
        // LCOV_EXCL_STOP
    }

    buffer[0] = b + 4;
    int returnValue = buffer[0];
    free(buffer);
    return returnValue;
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

int squares(double a, double b, double c, double *root1, double *root2) {
    double d;

    if (a == 0) {
        return -1; // Уравнение не квадратное
    }

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        *root1 = (-b + sqrt(d)) / (2 * a);
        *root2 = (-b - sqrt(d)) / (2 * a);
        return 2;  // Два корня
    } else if (d == 0) {
        *root1 = -b / (2 * a);
        return 1;  // Один корень
    } else {
        return 0;  // Нет корней
    }
}


void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}
