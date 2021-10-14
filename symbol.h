#pragma once
#include <iostream>
#include <vector>

class Symbol
{
private:
  std::vector<char> mySymbol_;
  int size_ = 1;

public:
  Symbol(char newChar);
  ~Symbol();

  void addChar(char);
  void printSymbol();
  
  int getSize();
  char getSymbolValue();
};



