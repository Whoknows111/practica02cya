#pragma once
#include <iostream>
#include <vector>
#include "symbol.h"

class Alphabet
{
private:
    std::vector<Symbol> arraySymbol_;

public:
    Alphabet(Symbol);
    ~Alphabet();

    void addSymbol(Symbol);
    void printAlphabet();
};

/*ostream& operator<<(operator<<(ostream& os, Symbol mySymbol){
    os << mySymbol.printSymbol();
    return os;
}*/


