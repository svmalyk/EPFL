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
    Caddie.C
\*---------------------------------------------------------------------------*/
#include "caddie.H"

 
// Default Constructor
    Caddie::Caddie() = default;

// Overloaded Constructor - 
    //NONE

// destructeur
    Caddie::~Caddie() = default;

// getters

std::vector<Achat> Caddie::getLesCourses() const{
    return lesCourses;
}

double Caddie::getMontantCaddie() const{
      return montantCaddie;
}

// setters


   
// methods
void Caddie::remplir(const Article& articleName, int articleQuantity)
{
    Achat achat(articleName, articleQuantity);
    montantCaddie += achat.getMontantAchat();
    lesCourses.push_back(achat);
}

// overload the function remplir is the quantity is not provided
void Caddie::remplir(const Article& articleName){
    Achat achat(articleName);
    montantCaddie += achat.getMontantAchat();
    lesCourses.push_back(achat);
}

void Caddie::displayCaddie(){
    for (Achat achat : lesCourses){
        achat.displayAchat();
    }
}