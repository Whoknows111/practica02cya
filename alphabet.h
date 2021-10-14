#pragma once
#include <iostream>
#include <vector>
#include "symbol.h"

class Alphabet
{
private:
    std::vector<Symbol> arraySymbol_;
    
public:
    Alphabet(/* args */);
    ~Alphabet();

    void addSymbol(std::vector<char>);
    void printAlphabet();
};



