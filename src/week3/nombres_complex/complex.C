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
#include "complex.H"

// Default Constructor
    Complex::Complex() = default;

// Overloaded Constructor - 
    Complex::Complex(double reel_i, double imaginaire_i):
        reel(reel_i),
        imaginaire(imaginaire_i)
    {}

// destructeur
    Complex::~Complex() = default;

// getters


 
// setters

   
// methods

bool Complex::operator==(Complex const& number){
    return (
            abs(reel - number.reel) <= 1e-20    
            && 
            abs(imaginaire - number.imaginaire) <= 1e-20
           );
        }

Complex Complex::operator+=(Complex const& C){
    reel += C.reel;
    imaginaire += C.imaginaire;
    return *this;
}       

Complex Complex::operator-=(Complex const& C){
    reel -= C.reel;
    imaginaire -= C.imaginaire;
    return *this;
}     

Complex Complex::operator*=(Complex const& C){
    double x = reel*C.reel - imaginaire*C.imaginaire;
    double y = reel*C.imaginaire + imaginaire*C.reel;
    this->reel = x;
    this->imaginaire = y;
    //std::cout << "real part: " << value.reel << std::endl;
    //std::cout << "imaginary part: " << value.imaginaire << std::endl;
    return *this;
}     

Complex Complex::operator/=(Complex const& C){
    double x = (reel*C.reel + imaginaire*C.imaginaire)/
               (C.reel*C.reel + C.imaginaire*C.imaginaire);
    double y = (imaginaire*C.reel - reel*C.imaginaire)/
               (C.reel*C.reel + C.imaginaire*C.imaginaire);
    this -> reel = x;
    this -> imaginaire = y;
    return *this;
}     

Complex Complex::operator+=(double const& x){
    reel += x;
    return *this;
}        

Complex Complex::operator*=(double x){
    reel *= x;
    imaginaire *= x;
    return *this;
}    

Complex Complex::operator/(double x){
    reel /= x;
    imaginaire /= x;
    return *this;
}

std::ostream& Complex::printComplex(std::ostream& sortie) const{
sortie << "(" << reel ;
   if (imaginaire > 0.0) sortie << " + " << imaginaire << "i)";
   else if (imaginaire < 0.0) sortie << " - " << -imaginaire << "i)";
   else sortie << " )";
   return sortie;
}

    
std::ostream& operator<<(std::ostream& sortie, Complex const& C){
    return C.printComplex(sortie);
}

Complex operator+(Complex C1, Complex const& C2){
    return C1+=C2;
}

Complex operator+(Complex C, double x){
    return C+=x;
}

Complex operator+(double x, Complex C){
    return C+=x;
}

Complex operator*(Complex C1, Complex const& C2){
    return C1*=C2;
}

Complex operator*(double k, Complex& C){
    return C*=k;
}
