#include "symbol.h"
#include "alphabet.h"
#include "strings.h"



int main () {
  
  Symbol A;
  //std::string myCadena("holita");
  Symbol B("holaquetal");
  
  B.printSymbol();

  A.addToSymbol("adios");
  B.addToSymbol("hey");

  A.printSymbol();
  B.printSymbol();
  
  Alphabet C(A);
  C.printAlphabet();
  C.addSymbol(B);
  C.printAlphabet();

  Strings D(A);
  Strings E(A);
  D.addSymbol(B);
  D.printString();
  //E = D.stringReverse();
  //E.printString();

  

  return 0;
}


