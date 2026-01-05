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
#include "caisse.H"

 
// Default Constructor
    Caisse::Caisse() = default;

// Overloaded Constructor - 
    //NONE

// destructeur
    Caisse::~Caisse() = default;

// getters


    double Caisse::getMontantCaisse() const{
        return montantCaisse;
    }
// setters


   
// methods
void Caisse::scanner(const Caddie&  caddie){

    for(Achat achat : caddie.getLesCourses()){
        achat.displayAchat();
    }
    std::cout << "-----" << std::endl;
    std::cout << "Total à payer : "
    << caddie.getMontantCaddie()
    << " F."
    << std::endl;

    montantCaisse += caddie.getMontantCaddie();
}

void Caisse::afficher(){
    std::cout << getMontantCaisse()
              << " F";
}