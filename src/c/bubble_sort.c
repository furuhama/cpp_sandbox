/* Copyright 2018 furuhama */

#include "./debug_macro.h"

void SortBubble(int array[], int n) {
    int tmp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i + 1; j++) {
            if (array[j] < array[j - 1]) {
                tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
}

int main() {
    int target[] = { 10, 2, 3, 17, 37, 3, 22, 43, 32 };

    SortBubble(target, 9);

    return 0;
}
