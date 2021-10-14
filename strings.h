#pragma once
#include <iostream>
#include <vector>
#include "alphabet.h"


class Strings
{
private:
    Alphabet myAlphabet_;
    int stringSize_ = 0;
    std::vector<Symbol> stringSymbols_;

public:
    Strings(Symbol);
    ~Strings();

    void operaciones(int);
    void addSymbol(Symbol);
    Strings& stringReverse();
};


