/* Copyright 2017 furuhama */
#include <iostream>
#include <string>

int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  using std::string;

  class Monster {
   private:
     string name;
   public:
     explicit Monster(string n) {
       name = n;
     }
     void roar() {
       cout << "grrrr... my name is " << name << endl;
     }
  };

  string name;
  cout << "please input name of monster" << endl;
  // cin >> name;
  name = "tama";
  cout << "summon your monster..." << endl;
  // set Monster instance
  Monster m(name);
  m.roar();
  return 0;
}
