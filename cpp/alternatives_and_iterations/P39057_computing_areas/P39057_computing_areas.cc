/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P39057_computing_areas.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 16 2023
  * @brief This is a program that reads several descriptions of rectangles and
  * circles, and for each one prints its corresponding area.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39057_en
  */
#include <iomanip>
#include <iostream>
#include <string>
int main() {
  double length, width, radius;
  int number, descriptions;
  for(int i = 0; i < number - 1; i++) {
    std::string shape;
    std::cin >> shape;
  
  if(shape == "rectangle") {
    std::cin >> length >> width;
    double area = length * width;
    std::cout << std::fixed << std::setprecision(6) << area << std::endl;
  } if(shape == "circle") { 
    std::cin >> radius;
    double area = radius * radius * 3.14159265359;
    std::cout << std::fixed << std::setprecision(6) << area << std::endl;
    }
  }

  return 0;
}
