#include "strings.h"

//Constructor
Strings::Strings(Symbol newSymbol)
{
  //Symbol A('&');
  Strings::addSymbol(newSymbol);
  //Strings::stringSize_ = 0;
}

//Destructor
Strings::~Strings()
{
}

void Strings::addSymbol(Symbol newSymbol){
  Strings::stringSymbols_.push_back(newSymbol);
}
