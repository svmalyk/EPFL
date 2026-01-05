#include <iostream>
//#include <complex>
//#include "../../lnInclude/week3/nombres_complex/complex.H"
#include "../../lnInclude/week3/nombres_complex/complexe.H"

int main(){

  Complexe defaut;
  Complexe zero(0.0,0.0);
  Complexe one(1.0,0.0);
  Complexe i(0.0,1.0);
  Complexe a(2.0,-5.0);
  Complexe j;

//std::cout << zero << std::endl;

  std::cout << zero << " ==? " << defaut;
  if (zero == defaut) std::cout << " oui" << std::endl;
  else std::cout << " non" << std::endl;
  
  std::cout << zero << " ==? " << i;
  if (zero == i) std::cout << " oui" << std::endl;
  else std::cout << " non" << std::endl;

  std::cout << std::endl;
  j = one + i;

  std::cout << one << " + " << i << " = " << j << std::endl;

  std::cout << std::endl;

  Complexe trois(one);
  trois += one;
  trois += 1.0;
  std::cout << one << " + " << one << " + 1.0 = " << trois << std::endl;

  std::cout << std::endl;

  Complexe deux(trois);
  deux -= one;
  std::cout << trois << " - " << one << " = " << deux << std::endl;

  trois =  1.0 + deux;
  std::cout << "1.0 + " << deux << " = " << trois << std::endl;

  Complexe z(i*i);
  std::cout << i << " * " << i << " = " << z << std::endl;

 std::cout << " z = " << z << std::endl;
  Complexe k(2.0,-3.0);
  z = k;
  z *= 2.0;
  z *= i;
  
  std::cout << k << " * 2.0 * " << i << " = " << z << std::endl;
  z = 2.0*k*i/2.0;

  //std::cout << z << std::endl;
  //z = 2.0 * k * i / 1.0;
  std::cout << " 2.0 * " << k << " * " << i << " / 2.0 = " << z << std::endl;

return 0;

}//end-of-main

