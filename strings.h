#pragma once
#include <iostream>
#include <vector>
#include "alphabet.h"
#include "strings.h"


class Strings
{
private:
  //Alphabet myAlphabet_;
  std::vector<Symbol> stringSymbols_;

public:
  Strings(Symbol);
  ~Strings();

  void addSymbol(Symbol);

  int getLenght();
  Strings stringReverse();
  std::vector<Strings> getPrefixes();
  std::vector<Strings> getSuffixes();
  std::vector<Strings> getSubstrings();
  
  void operaciones(int);
  void printString();
};


