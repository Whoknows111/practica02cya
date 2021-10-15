#pragma once
#include <iostream>
#include <string>

class Symbol
{
private:
  std::string mySymbol_;

public:
  Symbol(std::string);
  Symbol();
  ~Symbol();

  std::string getSetSymbol();
  
  void addToSymbol(std::string);
  void printSymbol();
};



