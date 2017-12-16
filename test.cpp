/* Copyright 2017 furuhama */
// testing c language with c++ compiler
#include <stdio.h>

int main() {
    // sample array program
    int n[] = { 1, 2, 3, 4, 5 };
    int i;
    for (i = 0; i < 5; i++) {
        printf("n[%d] = %d\n", i, n[i]);
    }

    // sample char program
    char s1[4] = { 'a', 'b', 'c', '\0' };
    char s2[] = "Hello, world";
    char s3[10];
    printf("please input literals\n");
    scanf("%s", s3);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);

    return 0;
}
