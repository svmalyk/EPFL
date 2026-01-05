/*---------------------------------------------------------------------------*\
 #####  #     # |
 #      # # # # | Project Name: Description of the project
 #####  #  #  # | Source Code URL:
     #  #     # | Copyright (C) 2023-2023
 #####  #     # |
-------------------------------------------------------------------------------
License
    This file is part of @ProjectName.
    @ProjectName is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    @ProjectName is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.
    You should have received a copy of the GNU General Public License
    along with @ProjectName. If not, see <http://www.gnu.org/licenses/>.
coding rules:
    Max nb. of lines: 80
    case: Camel Case (other cases: )
    attributes: end with a underscore (eg: attributeName_)
implementation file:
    implementation file contains implementation of all functions declared in
    the header file
Class
    @namespace::example
Description
    description of the class.
implementation file:
    caddie.C
\*---------------------------------------------------------------------------*/
#include "complexe.H"

// Default Constructor
    Complexe::Complexe() = default;

// Overloaded Constructor - 
    Complexe::Complexe(double real, double imag):
        z_(real, imag)
    {}

// destructeur
    Complexe::~Complexe() = default;

// getters


 
// setters

   
// methods

    bool Complexe::operator==(Complexe const& C) const = default; 

   
   

std::ostream& Complexe::printComplex(std::ostream& sortie) const{
sortie << "(" << real ;
   if (imag > 0.0) sortie << " + " <<  imag << "i)";
   else if (imag < 0.0) sortie << " - " << -imag << "i)";
   else sortie << ")";
   return sortie;
}

    
std::ostream& operator<<(std::ostream& sortie, Complexe const& C){
    return C.printComplex(sortie);
}


Complexe Complexe::operator+=(Complexe const& C){
    real += C.real;
    imag += C.imag;
    //std::cout << "real part: " << this->real << std::endl;
    //std::cout << "imaginary part: " << this->imag << std::endl;
    return *this;
}       

Complexe Complexe::operator-=(Complexe const& C){
    real -= C.real;
    imag -= C.imag;
    return *this;
}     

Complexe Complexe::operator*=(Complexe const& C){
    double x = real*C.real - imag*C.imag;
    double y = real*C.imag + imag*C.real;
    real = x;
    imag = y;
    //std::cout << "real part: " << value.real << std::endl;
    //std::cout << "imaginary part: " << value.imag << std::endl;
    return *this;
}     

Complexe Complexe::operator/=(Complexe const& C){
    double x = (real*C.real + imag*C.imag)/
               (C.real*C.real + C.imag*C.imag);
    double y = (imag*C.real - real*C.imag)/
               (C.real*C.real + C.imag*C.imag);
    this -> real = x;
    this -> imag = y;
    return *this;
}     

Complexe Complexe::operator+=(double const& x){
    real += x;
    return *this;
}        

Complexe Complexe::operator*=(double x){
    real *= x;
    imag *= x;
    return *this;
}    

Complexe Complexe::operator/(double x){
    real /= x;
    imag /= x;
    return *this;
}

Complexe operator+(Complexe C1, Complexe const& C2){
    return C1+=C2;
}

Complexe operator+(Complexe C, double x){
    return C+=x;
}

Complexe operator+(double x, Complexe C){
    return C+=x;
}

Complexe operator*(Complexe C1, Complexe const& C2){
    return C1*=C2;
}

Complexe operator*(double k, Complexe& C){
    return C*=k;
}
