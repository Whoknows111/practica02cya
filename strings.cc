#include "strings.h"

//Constructor
Strings::Strings(Symbol newSymbol = '&'){
  if (newSymbol.getSymbolValue() != '&'){
    Strings::addSymbol(newSymbol);
    Strings::stringLength_ = 1;
  } else
    Strings::stringLength_ = 0;
}

//Destructor
Strings::~Strings()
{
}

void Strings::addSymbol(Symbol newSymbol){
  if (newSymbol.getSymbolValue() != '&')
    Strings::stringSymbols_.push_back(newSymbol);
  else
    Strings::stringSymbols_[0] = newSymbol;
  
  Strings::stringLength_ += 1;
}

int Strings::getLenght(){
  return Strings::stringLength_;
}




