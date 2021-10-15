/*
Universidad de La Laguna
Escuela Superior de Ingeniería y Tecnología
Grado en Ingeniería Informática
Asignatura: Computabilidad y Algoritmia
Curso: 2º
Pr ́actica 2: Símbolos, alfabetos y cadenas
Autor: Nombre y Apellidos
Correo: alu0100918205@ull.edu.es
Fecha: 04/10/2021
Archivo cya-P02-Strings.cc: programa cliente.
Contiene la función main del proyecto que usa las clases X e Y
que realizan el trabajo de leer el fichero de entrada
identificando patrones en el texto que dan lugar
al fichero de salida.
Referencias:
Enlaces de interés
*/



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

  std::string getSymbol();
  void setSymbol(std::string);
  
  void addToSymbol(std::string);
  void printSymbol();
};



