#ifndef SRC_PERSON_HPP
#define SRC_PERSON_HPP

#include <string>

class Person {
 private:
     std::string name;
     std::string job;
     int old;
     static int objectCount;
 public:
     // this is a constructor for Person class
     // to initialize every attribute as it should be
     Person();
     Person(std::string n, std::string j, int o);

     // this is a destructor for Person class
     // called when its instance would be deleted from memory
     ~Person();

     static void printObjectCount();
     void setName(std::string n);
     void setJob(std::string j);
     void setOld(int o);
     void print();
};

#endif // SRC_PERSON_HPP
