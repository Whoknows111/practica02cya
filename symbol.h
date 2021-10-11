#pragma once
#include <iostream>
#include <vector>

class symbol
{
private:
  std::vector<char> mySymbol_;
  int size_ = 1;
public:
  symbol();
  ~symbol();
  void addChar(char);
  void printSymbol();
  int getSize();
};



