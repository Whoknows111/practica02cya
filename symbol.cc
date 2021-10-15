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

std::string Symbol::getSymbol(){
  return Symbol::mySymbol_;
}

void Symbol::setSymbol(std::string newString){
  Symbol::mySymbol_ = newString;
}


