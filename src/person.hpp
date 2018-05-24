/* Copyright 2017 furuhama */

#pragma once
#include <string>

class Person {
 private:
     std::string name;
     std::string job;
     int old;
 public:
     void setName(std::string n);
     void setJob(std::string j);
     void setOld(int o);
     void print();
};
