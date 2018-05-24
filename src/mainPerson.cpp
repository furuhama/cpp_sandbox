/* Copyright 2017 furuhama */

#include <iostream>
#include "person.hpp"

int main() {
    Person::printObjectCount();

    Person p;
    p.setName("にゃ〜ん");
    p.setJob("ねこ");
    p.setOld(15);
    p.print();

    Person::printObjectCount();

    Person ppp("ほげ", "ほげ", 15);
    std::cout << "Finish initializing" << std::endl;
    ppp.print();

    Person::printObjectCount();

    Person* pp = new Person("にゃん", "わん", 5);
    // (*pp).print();
    pp->print();

    Person::printObjectCount();

    delete pp;

    Person::printObjectCount();

    return 0;
}
