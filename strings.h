#pragma once
#include <iostream>
#include <vector>
#include "alphabet.h"


class Strings
{
private:
  //Alphabet myAlphabet_;
  int stringLength_ ;
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
};


