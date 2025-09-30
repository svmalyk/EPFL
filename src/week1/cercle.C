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
    example.C
\*---------------------------------------------------------------------------*/
#include "cercle.H"
 
// Default Constructor
   cercle::cercle() = default;

// Overloaded Constructor - Specifies centre and radius
    cercle::cercle(double radius_i, vector2D centre_i):
                   radius(radius_i),
                   centre(centre_i) 
    {
        std::cout << "The radius of the circle is: "
                  << radius
                  << std::endl;
        std::cout << "and coordinates of the centre are: ";
                    centre.coordinates();
        std::cout << std::endl;
    }


// Overloaded Constructor - Specifies a centre
    cercle::cercle(vector2D centre_i): 
                   centre(centre_i) 
    { 
        std::cout << "Coordinates of the centre are: ";
                    centre.coordinates();
        std::cout << std::endl; 
    }


// Overloaded Constructor - Specifies radius
    cercle::cercle(double radius_i):
                   radius(radius_i)
    {
        std::cout << "The radius of the circle is: "
                  << radius
                  << std::endl;
    }

// destructeur
    cercle::~cercle() = default;

// getters

    double cercle::getRadius() const {
        return radius;
    }

    vector2D cercle::getCentre() const {
        return centre;
    }
/*
    double cercle::getCentreXCoordinate() const {
        return centre.getXCoordinate();
    }

    double cercle::getCentreOrdinate() const {
        return centre.getYCoordinate();
    }
*/

// setters

    void cercle::setRadius(double radius_i){
        radius = radius_i;
    }
/*
    void cercle::setCentre(double x_i, double y_i){
         centre.x_coordinate = x_i;
         centre.y_coordinate = y_i;
    }

    void cercle::setPointX_Coordinate(double x_i){
        P.x_coordinate = x_i;
    }

    void cercle::setPointY_Coordinate(double y_i){
        P.y_coordinate = y_i;
    }
*/
// methods

    double cercle::surface() const{
        return M_PI*radius;
    }

    // Test is interior using coordinates
    bool cercle::isInterior(double x_i, double y_i){
        return ( 
                pow(centre.getXCoordinate() - x_i,2) 
          +     pow(centre.getYCoordinate() - y_i,2) 
         <=     pow(radius,2)
            );
    }    
    // overloaded test is interior
    // Test is interior using coordinates
    bool cercle::isInterior(vector2D p){
        return ( 
                pow(centre.getXCoordinate() - p.getXCoordinate(),2) 
          +     pow(centre.getYCoordinate() - p.getYCoordinate(),2) 
         <=     pow(radius,2)
            );
    }
           