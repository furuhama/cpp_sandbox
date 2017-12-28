/* Copyright 2017 furuhama */

#include <iostream>
#include <string>
#include "hello.hpp"

void Monster::roar() {
  std::cout << "grrrr... my name is " << Monster::name << std::endl;
}
void Monster::attack() {
  std::cout << Monster::name << " attacked!!!" << std::endl;
  std::cout << "SMAAAAAASH!!!" << std::endl;
  std::cout << "Damage: " << Monster::power << std::endl;
}

int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  using std::string;

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
