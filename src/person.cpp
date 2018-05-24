/* Copyright 2017 furuhama */

#include <iostream>
#include "person.hpp"

void Person::setName(std::string n) {
    name = n;
}

void Person::setJob(std::string j) {
    job = j;
}

void Person::setOld(int o) {
    if (o < 0) {
        std::cout << "Error: old should be gteq 0." << std::endl;
    } else {
        old = o;
    }
}

void Person::print() {
    std::cout << "name: " << name << std::endl;
    std::cout << "job: " << job << std::endl;
    std::cout << "old: " << old << std::endl;
}
