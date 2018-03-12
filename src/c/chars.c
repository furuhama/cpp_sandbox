/* Copyright 2018 furuhama */

#include <stdio.h>
#include <stdlib.h>

#define DEBUG_S(x) printf(#x "\t= %s\n", (x))
#define DEBUG_D(x) printf(#x "\t= %d\n", (x))

int main() {
    // try to print char array without EOS(= End Of String)
    char str1[2] = {'a', 'b'};
    int i = strlen(str1);
    // Type casting
    char str2[] = "145";
    int num = atoi(str2);

    printf("%s\n", str1);
    printf("%d\n", i);
    printf("%d\n",num);
    DEBUG_S(str1);
    DEBUG_D(i);
    DEBUG_D(num);

    return 0;
}
