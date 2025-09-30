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
    vector3D.C
\*---------------------------------------------------------------------------*/
#include "vector3D.H"

// Constructors
    

// Default Constructor
   vector3D::vector3D() = default;

// Overloaded Constructor - Specifies the coordinates of the vector
    vector3D::vector3D(double x_i, double y_i, double z_i):
             x_coordinate(x_i),
             y_coordinate(y_i),
             z_coordinate(z_i)
    {
        /*
        std::cout << "The x-coordinate of the point is "    
                  << x_coordinate << std::endl;
        std::cout << "and the y-coordinate of the point is " 
                  << y_coordinate << std::endl;
        */
    }

// destructeur
    vector3D::~vector3D() = default;

// getters
    void vector3D::coordinates() const {
        std::cout << "(" << x_coordinate 
                  << "," << y_coordinate 
                  << "," << z_coordinate << ")";
    }

    double vector3D::getXCoordinate() const {
        return x_coordinate;
    }

    double vector3D::getYCoordinate() const {
        return y_coordinate;
    }

    double vector3D::getZCoordinate() const {
        return z_coordinate;
    }

// setters


// methods
