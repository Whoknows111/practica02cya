#include "strings.h"

//Constructor
Strings::Strings(Symbol newSymbol){
    Strings::addSymbol(newSymbol);
    Strings::stringLength_ = 1;
}

//Destructor
Strings::~Strings()
{
}

void Strings::addSymbol(Symbol newSymbol){
  /*if (newSymbol.getSetSymbol() != '&')
    Strings::stringSymbols_.push_back(newSymbol);
  else
    Strings::stringSymbols_[0] = newSymbol;
  
  Strings::stringLength_ += 1;*/
}

int Strings::getLenght(){
  return Strings::stringLength_;
}

Strings Strings::stringReverse(){
  /*Strings newString("");
  for (int i = Strings::stringSymbols_.size() - 1; i >= 0; i--)
  {
    newString.addSymbol(Strings::stringSymbols_[i]);
  }
  return newString;*/
}

std::vector<Strings> Strings::getPrefixes(){
  std::vector<std::vector<Symbol> > myPrefixes;
  /*for (int i = 0; i < count; i++)
    for (int j = 0; j < count; j++)
    {
        
    }
  //hacer pushfront de &
  */
}

std::vector<Strings> Strings::getSuffixes(){

}

std::vector<Strings> Strings::getSubstrings(){

}


