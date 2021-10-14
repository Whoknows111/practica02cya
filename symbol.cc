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
  for (int i = 0; i < Symbol::mySymbol_.size(); i++)
  {
    /* code */
  }
  
}
  //std::cout << symbol::mySymbol_[0] << std::endl;

std::vector<char>& Symbol::getSymbolValue(){
  return Symbol::mySymbol_;
}


