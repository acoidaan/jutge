/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P29448_correct_Dates.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @Date Oct 24 2023
  * @brief This is a program that reads several Dates, and for each one tells 
  * if it is correct or not according to the Gregorian calendar.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29448_en  
  */
#include <iostream>

// Function to check if its a leap year
bool isLeapYear(int year) {
  return (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);
}

// Function to valiDate the date introduced
bool isValidDate(int day, int month, int year) {
  if (year < 1800 || year > 9999) {
    return false;
  }
  if (month < 1 || month > 12) {
    return false;
  }
  if (day < 1) {
    return false;
  }
  switch (month) {
    case 2: 
      if (isLeapYear(year)) {
        return day <= 29;
      } else {
          return day <= 28;
      }
    case 4:
    case 6:
    case 9:
    case 11:
      return day <= 30;
    default:
      return day <= 31;
    }
}

// Main function to print the result
int main() {
  int day, month, year;
  while (std::cin >> day >> month >> year) {
    if (isValidDate(day, month, year)) {
      std::cout << "Correct Date" << std::endl;
    } else {
      std::cout << "Incorrect Date" << std::endl;
    }
  }

  return 0;
}
