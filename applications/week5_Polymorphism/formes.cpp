// Test script to test utility/vector 
#include <iostream>
#include <numbers>
#include "/home/smalik/development/PROJECTS_CXX/EPFL/lnInclude/week5_Polymorphism/formes/formes.hpp"
#include "/home/smalik/development/PROJECTS_CXX/EPFL/lnInclude/week5_Polymorphism/formes/cercle.hpp"
#include "/home/smalik/development/PROJECTS_CXX/EPFL/lnInclude/week5_Polymorphism/formes/formesAbstract.hpp"
#include "/home/smalik/development/PROJECTS_CXX/EPFL/lnInclude/week5_Polymorphism/formes/cercleAbstract.hpp"
#include "/home/smalik/development/PROJECTS_CXX/EPFL/lnInclude/week5_Polymorphism/formes/triangleAbstract.hpp"

int main(){
         
  Forme f;
  Cercle c;
/*
  f.description();
  c.description();

  Forme f2(c);
  f2.description();

  affichageDesc(f);
  affichageDesc(c);
*/

  CercleAbstract ca(5.0);
  affichageDesc(ca);

  TriangleAbstract ta(10, 2);
  affichageDesc(ta);

  return 0;

}//end-of-main