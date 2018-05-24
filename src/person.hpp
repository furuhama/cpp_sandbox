/* Copyright 2017 furuhama */

#pragma once
#include <string>

class Person {
 private:
     std::string name;
     std::string job;
     int old;
 public:
     // this is a constructor for Person class
     // to initialize every attribute as it should be
     Person();

     // this is a destructor for Person class
     // called when its instance would be deleted from memory
     ~Person();

     void setName(std::string n);
     void setJob(std::string j);
     void setOld(int o);
     void print();
};
