/* Copyright 2018 furuhama */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // try to print char array without EOS(= End Of String)
    char str1[2] = {'a', 'b'};
    int i = strlen(str1);
    // Type casting
    char str2[] = "145";
    int suuti = atoi(str2);

    printf("%s\n", str1);
    printf("%d\n", i);
    printf("%d\n",suuti);

    return 0;
}
