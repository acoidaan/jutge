/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P58653.cc
  * @author Acoidan Martín Conrado alu0101623627@ull.edu.es
  * @date Oct 30 2023
  * @brief This is a program that decides if a character is a letter, vowel,
  * consonant, uppercase and a digit.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58653_en
  */
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main() {
    char input;
    std::cin >> input;

    print_line(input, "letter", (input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'));
    print_line(input, "vowel", (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U'));
    print_line(input, "consonant", ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) && !((input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')));
    print_line(input, "uppercase", (input >= 'A' && input <= 'Z'));
    print_line(input, "lowercase", (input >= 'a' && input <= 'z'));
    print_line(input, "digit", (input >= '0' && input <= '9'));

    return 0;
}

