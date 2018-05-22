/* Copyright 2017 furuhama */
#ifndef HELLO_HPP_
#define HELLO_HPP_

#include <string>

class Monster {
 private:
    std::string name;
    int power;

 public:
    Monster(std::string n, int p) {
        name = n;
        power = p;
    }
    void roar();
    void attack();
};

#endif  // HELLO_HPP_
