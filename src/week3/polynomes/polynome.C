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
#include "polynome.H"

 
// Default Constructor
    Polynome::Polynome():
        coeffs_({0.0})
    {
        //std::cout << "Number of coefficients : " 
        //          << coeffs_.size() << std::endl;
        //std::cout << "And first element is : " 
        //          << coeffs_[0] << std::endl;            
    }

// Overloaded Constructor - 
    Polynome::Polynome(std::vector<double> coef):
    coeffs_(coef)
    {
        //size_t deg = coef.size() - 1;
        //std::cout << "degree of polynomial: " 
        //          << deg << std::endl;
    }

// destructeur
    Polynome::~Polynome() = default;

// getters


 
// setters

// methods

int Polynome::degree() const{
    int degree;
    //int coefficients = coeffs_.size();

    if(nbOfTerms_ > 1) degree = nbOfTerms_-1;
    else if(coeffs_[0] != 0.0 ) degree = 0;
    else degree = -1;

    return degree;
    // The degree of the polynomial equals one less than number of 
    // elements in coeffs_
}


std::ostream& Polynome::displayPolynom(std::ostream& out) const{
    int exponent = nbOfTerms_-1;
    int index = 0;
    do {
      if (index == nbOfTerms_-1) out << coeffs_[index];
      else {
        if(coeffs_[index] !=0 ) out << coeffs_[index] << "*x"<< exponent << " + ";
        }
      ++index;
      --exponent;
    }while (index != nbOfTerms_);
    return out;
}


Polynome& Polynome::operator*=(Polynome const& Q){
    return (*this = *this * Q);
}

Polynome& Polynome::operator*=(double x){
    for(int i=0; i <= nbOfTerms_-1; i++) coeffs_[i] *= x;
    return *this;
}

// external methods

const Polynome operator*(Polynome P, Polynome const& Q) {
    
    
    //int degreeP = P.nbOfTerms_-1;
    //int degreeQ = Q.nbOfTerms_-1;

    std::vector<double> v(P.nbOfTerms_ + Q.nbOfTerms_-1,0.0); 
                        // the maximum number of terms in a product
    Polynome R(v);

    std::cout << "Length R: " << R.nbOfTerms_ << std::endl;
    for(int i=0; i<= R.nbOfTerms_ -1; i++) std::cout << R.coeffs_[i] << std::endl;

    //std::cout << "Length P: " << degreeP+1 << std::endl;
    //std::cout << "Length Q: " << degreeQ+1 << std::endl;
    
    for(int i=0; i <= P.nbOfTerms_-1; i++)
        for(int j=0; j <= Q.nbOfTerms_-1; j++)
            R.coeffs_[i+j] += P.coeffs_[i]*Q.coeffs_[j]; 
            
    return R;

}

Polynome operator*(double x, Polynome& P){
    return P*=x;
}

Polynome operator*(Polynome& P, double x){
    return P*=x;
}



std::ostream& operator<<(std::ostream& out, Polynome const& P){
    return P.displayPolynom(out);
}


   

