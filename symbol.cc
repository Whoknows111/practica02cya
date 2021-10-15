#include "symbol.h"

Symbol::Symbol(std::string newString) : mySymbol_(newString)
{
}

Symbol::Symbol() : mySymbol_("") {
}

Symbol::~Symbol()
{
}

void Symbol::addToSymbol(std::string newString) {
  Symbol::mySymbol_ += newString;
}

void Symbol::printSymbol(){
  std::cout << Symbol::mySymbol_ /*<< std::endl*/;
}

std::string Symbol::getSetSymbol(){
  return Symbol::mySymbol_;
}


