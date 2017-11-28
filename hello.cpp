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
    int power;
   public:
    explicit Monster(string n, int p) {
      name = n;
      power = p;
    }
    void roar() {
      cout << "grrrr... my name is " << name << endl;
    }
    void attack() {
      cout << name << " attacked!!!" << endl;
      cout << "SMAAAAAASH!!!" << endl;
      cout << "Damege: " << power << endl;
    }
  };

  string inputName;
  int inputAttack;
  // cout << "please input name of monster" << endl;
  // cin >> name;
  inputName = "tama";
  inputAttack = 213;

  cout << "summon your monster..." << endl;
  // set Monster instance
  Monster m(inputName, inputAttack);
  m.roar();
  m.attack();

  return 0;
}
