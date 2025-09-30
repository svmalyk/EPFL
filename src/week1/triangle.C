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
#include "triangle.H"
 
// Default Constructor
    triangle::triangle() = default;

// Overloaded Constructor - Specifies centre and radius
    triangle::triangle(vector3D A_i, vector3D B_i, vector3D C_i):
                   A(A_i),
                   B(B_i) ,
                   C(C_i) 
    {
        std::cout << "Triangle with vertices: ";
                    A.coordinates(); 
        std::cout << ", ";
                    B.coordinates();
        std::cout << " and ";
                    C.coordinates();
        std::cout << " is created." << std::endl;
        // Calculate the length of sides
        AB = triangle::length(A,B);
        BC = triangle::length(B,C);
        CA = triangle::length(C,A);
    }

// destructeur
    triangle::~triangle() = default;

// getters

    vector3D triangle::getCoordinatesOfA() const {
        return A;
    }

    vector3D triangle::getCoordinatesOfB() const {
        return B;
    }

    vector3D triangle::getCoordinatesOfC() const {
        return C;
    }


// setters

   
// methods

    // Length of side of the triangle
    double triangle::length(const vector3D& P1, const vector3D& P2)  const {
        return sqrt(
                pow(P1.getXCoordinate() - P2.getXCoordinate(),2) 
             +  pow(P1.getYCoordinate() - P2.getYCoordinate(),2)
             +  pow(P1.getZCoordinate() - P2.getZCoordinate(),2)
            );
    }

    // Area of the triangle
    double triangle::area(vector3D&, vector3D&) const{
        return 0.0;
    }    
   
    // Perimeter of the triangle
    double triangle::perimeter() const {
        
        /*
        return length(A,B) + 
               length(B,C) + 
               length(C,A) ;
        */

        return AB+BC+CA;
    }
           
    std::string triangle::triangleTypeBySide() const{
        int base = 10;    
        int precision = 5;
        /*
        //Calculating lengths of sides
        double AB = length(A,B);
        double BC = length(B,C); 
        double CA = length(C,A);

               
        std::cout << "Lenght AB = " << AB << std::endl;
        std::cout << "Lenght BC = " << BC << std::endl;
        std::cout << "Lenght CA = " << CA << std::endl;
        */

        // Checking if lengths are equal upto 5 decimal places
        if 
        ( 
            std::abs(AB - BC) < std::pow(base, -precision) && 
            std::abs(BC - CA) < std::pow(base, -precision)
        ) 
        {
            //std::cout << "Equilateral Triangle" <<  std::endl;
            return "Equilateral";
        } 
        else if 
        (
            std::abs(AB - BC) < std::pow(base, -precision) || 
            std::abs(BC - CA) < std::pow(base, -precision) || 
            std::abs(CA - AB) < std::pow(base, -precision)
        ) 
        {
            //std::cout << "Isosceles Triangle" <<  std::endl;
            return "Isosceles";  
        }
        else {
            //std::cout << "Scalene" <<  std::endl;
            return "Scalene";    
        }
    }