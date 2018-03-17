/* Copyright 2018 furuhama */

#include "./debug_macro.h"

int main() {
    int *p;
    int i;
    p = &i;
    *p = 10;

    DEBUG(p, p);
    DEBUG(p, &i);
    DEBUG(d, i);

    return 0;
}
