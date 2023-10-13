#include <iostream>
int main() {

  int numero1{};
  int numero2{};
  int cociente{};
  int resto{};
   std::cin >> numero1 >> numero2;

    cociente = numero1 / numero2;
    resto = numero1 - cociente * numero2;

  if(resto < 0) {
    resto += numero2;
    cociente -= 1;

  } 
    
    std::cout << cociente << " " << resto << std::endl;

return 0;







}
