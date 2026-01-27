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
    voiture.C
\*---------------------------------------------------------------------------*/
#include "voiture.H"

 
// Default Constructor
    

// Overloaded Constructor - 

  Voiture::Voiture(
        std::string marque_i, 
        int yearOfPurchase_i,  
        double purchaseAmount_i, 
        double cylindree_i,
        int nombreDePortes_i,
        double puissance_i,
        double kilometrage_i
          ): 
        Vehicule(marque_i,
                 yearOfPurchase_i,
                 purchaseAmount_i),
        cylindree_(cylindree_i),
        nombreDePortes_(nombreDePortes_i),
        puissance_(puissance_i),
        kilometrage_(kilometrage_i)
    {}          

// destructeur
    Voiture::~Voiture() = default;

// getters


 
// setters

// methods

void Voiture::calculePrix(){
    double decote((2015 - yearOfPurchase_) * .02);
    decote += 0.05 * (kilometrage_ / 10000);
    if (marque_ == "Fiat" or marque_ == "Renault")
        decote += 0.1;
    else if (marque_ == "Ferrari" or marque_ == "Porsche")
        decote -= 0.2;
    currentValuation_ = std::max(0.0, (1.0 - decote) * purchaseAmount_);  
    
    //std::cout << "decote : " << 1-decote << std::endl;             
}

std::ostream& Voiture::affiche(std::ostream& out) const{
    std::cout << "---- Voiture ----" << std::endl;
    Vehicule::affiche(out);
    std::cout << "prix actuel : " << currentValuation_ << std::endl;
    out << cylindree_ << " litres, "
        << nombreDePortes_ << " portes, "
        << puissance_ << " CV, "
        << kilometrage_ << " km." << std::endl;
    return out;
}


