/* Copyright 2018 furuhama */

#include "./debug_macro.h"

struct hoge {
    int age;
    int number;
    char status[64];
    double point;
};

int main() {
    struct hoge data;

    data.age = 10;
    DEBUG(d, data.age);

    return 0;
}
