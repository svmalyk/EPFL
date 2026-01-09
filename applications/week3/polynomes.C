#include <iostream>
//#include <complex>
#include "../../lnInclude/week3/polynomes/polynome.H"

int main(){

  Polynome P1({1.0, 12.0, 3.0});

  Polynome P2;
  //P2.degree();
  Polynome P3({3.0});

  Polynome P4({2.0,1.3});

  //std::cout << "Degree of P1: " << P1.degree() << std::endl;
  //std::cout << "Degree of P2: " << P2.degree() << std::endl;
  //std::cout << "Degree of P3: " << P3.degree() << std::endl;

  std::cout << "Polynomial P1: " << P1 << std::endl;
  //std::cout << "Polynomial P2: " << P2 << std::endl;
  //std::cout << "Polynomial P3: " << P3 << std::endl;
  //std::cout << "Polynomial P4: " << P4 << std::endl;

  std::cout << "Multiplication of P1 and P4:" << std::endl;
  std::cout << P1*P4 << std::endl;

  //P1*=P4;

  std::cout << "Multiplication with a constant 3:" << std::endl;
  std::cout << P4*31 << std::endl;

return 0;

}//end-of-main

