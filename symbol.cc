#include "symbol.h"

Symbol::Symbol(char newChar)
{
  addChar(newChar);
}

Symbol::~Symbol()
{
}

void Symbol::addChar(char newChar) {
  Symbol::mySymbol_.push_back(newChar);
}

void Symbol::printSymbol(){
  for (int i = 0; i < Symbol::mySymbol_.size(); i++){
    std::cout << Symbol::mySymbol_[i];
  }
  std::cout << std::endl;
}

char Symbol::getSymbolValue(){
  return Symbol::mySymbol_[0];
}


