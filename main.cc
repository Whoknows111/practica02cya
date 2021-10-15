#include "symbol.h"
#include "alphabet.h"
#include "strings.h"

#include <iostream>
#include <fstream>


int main (int argc, char *argv[]) {
  
  std::ofstream myFileOut(argv[2]);
  if (myFileOut.is_open()){
  myFileOut << "pruebita";
  }
  else
    std::cout << "Unable to open fileout.txt";
  myFileOut.close();

  std::string line;
  std::ifstream myFileIn(argv[1]);
  if (myFileIn.is_open()){
    while (getline (myFileIn, line)){
      std::cout << line << std::endl;
    }
  }  
  else
    std::cout << "Unable to open filein.txt";
  myFileIn.close();




  /*CONVERTIR EL DE OPERACIONES EN ENTERO??
  std::string micadena("hola esto es una prueba");
  std::cout << micadena.substr(3) << std::endl;

  std::cout << argv[1] << std::endl;
  std::cout << argv[2] << std::endl;
  std::cout << argv[3] << std::endl;

  Symbol A;
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
  E = D.stringReverse();
  E.printString();
  */
  
  return 0;
}


