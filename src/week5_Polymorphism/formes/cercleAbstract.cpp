/*---------------------------------------------------------------------------*\
 #####  #     # |
 #      # # # # | Project Name: EPFL
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
    
\*---------------------------------------------------------------------------*/
#include "cercleAbstract.hpp"

// Constructors
    
// Default Constructor
CercleAbstract::CercleAbstract() = default;

// Overloaded Constructor
CercleAbstract::CercleAbstract(double radius_):
  radius(radius_)
{/*
    std::cout << "The value of pi is : "
    << std::numbers::pi << std::endl;*/
}

// destructeur
CercleAbstract::~CercleAbstract() = default;

// methods
void CercleAbstract::description() {
    std::cout << "Ceci est un cercle !" << std::endl;
}

double CercleAbstract::aire() const {
    return std::numbers::pi*radius*radius;
}
