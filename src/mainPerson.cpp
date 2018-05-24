/* Copyright 2017 furuhama */

#include <iostream>
#include "person.hpp"

int main() {
    // Person p;
    // p.setName("にゃ〜ん");
    // p.setJob("ねこ");
    // p.setOld(15);
    // p.print();

    Person p("ほげ", "ほげ", 15);
    std::cout << "Finish initializing" << std::endl;
    p.print();

    Person* pp = new Person("にゃん", "わん", 5);
    // (*pp).print();
    pp->print();
    delete pp;

    return 0;
}
