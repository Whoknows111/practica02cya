#include "alphabet.h"


Alphabet::Alphabet(Symbol newSymbol)
{
  addSymbol(newSymbol);
}

Alphabet::~Alphabet()
{
}

void Alphabet::addSymbol(Symbol newSymbol){
  Alphabet::arraySymbol_.push_back(newSymbol);
}

void Alphabet::printAlphabet(){
  /*std::cout << "ALPHABET = {";
  for (int i = 0; i < Alphabet::arraySymbol_.size(); i++){
    std::cout << Alphabet::arraySymbol_[i].printSymbol() ;
    std::cout << ", ";
  }
  std::cout << "}" << std::endl;*/
}



