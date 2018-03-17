/* Copyright 2018 furuhama */

#include <stdio.h>
#include "./debug_macro.h"

void func(int *pvalue);  // prototype definition

int main() {
    int *p;
    int i;
    p = &i;
    *p = 10;

    DEBUG(p, p);
    DEBUG(p, &i);
    DEBUG(d, i);

    // use pointer in function

    int value = 5;

    DEBUG(p, &value);
    DEBUG(d, value);
    func(&value);
    DEBUG(d, value);

    return 0;
}

void func(int *pvalue) {
    DEBUG(p, pvalue);
    *pvalue = 100;
    return;
}
