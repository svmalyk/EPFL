/*---------------------------------------------------------------------------*\
 #####  #     # |
 #      # # # # | Project Name: EPFL
 #####  #  #  # | Source Code URL:
     #  #     # | Copyright (C) 2025
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
header file:
    Header file contains class definitions and function
    declarations (prototypes).
Class
    @namespace::cercle
Description
    description of the class.
implementation file:
    cercle.C
\*---------------------------------------------------------------------------*/
#ifndef TRIANGLE_H  // include guard
#define TRIANGLE_H

#include <iostream>
#include <vector>
#include <cmath>
#include "/home/smalik/development/PROJECTS_CXX/EPFL/src/utility/vectors/vector3D.H"

class triangle{

/********************************************************************
    Data members: Store the state of an object.
    Eg: In player class we can keep track of "score" and "lives"
********************************************************************/

/********************************************************************
    Acces rights: default (when nothing is specified) --> private)
    Public   : can be accessed from anywhere in the program
    Private  : are accessible from within the class itself
    Protected: are similar to private but can be accessed also by
               derived classes
********************************************************************/

private:
    // declarations of data members (attributes)
    vector3D A, B, C;
    double AB, BC, CA; // length of sides of the triangle


/********************************************************************
    Function members (a.k.a. methods): Define the behaviour of the
    object
    Constructor and Destructor are special functions that manage
    lifecycle of an object
********************************************************************/

public:
    // declarations of function members (methods)

/********************************************************************
    Constructor is automatically called when an object is created and
    is responsible for initiallizing the object.
    It creates and object allocating memory for the data members.

    // Defaut Constructor : does not receive any arguments but serves as
    // an entry point to write initialization code at object
    // instantiation
    example(){
        // initialization of data members if any
        dataMemberName = 10;
        dataMemberInitializedDynamically
                                    = new std::vector<std::string>();
    }

    // Overloaded Constructor
    example(type dataMemberName){
        // Here we have initializer for dataMemberName
        // Can have several initializer for data members
        this->dataMemberName = dataMemberName;
            // member variable dataMemberName is reffered
            // to as this->dataMemberName
            // "dataMemberName" on the RHS is the parameter.
        dataMemberInitializedDynamically
                                    = new std::vector<std::string>();
    }

    // Member initializer Constructor
    // default Constructor
    example(): dataMemberName(10){
        // initialization of data members if any
        dataMemberInitializedDynamically
                                    = new std::vector<std::string>();
    }

    // Overloaded Constructor
    example(type dataMemberName_i): dataMemberName(dataMemberName_i){
        // add suffix "_i" to initializers to avoid ambiguity
        // Can have several initializer for data members
        this->dataMemberName = dataMemberName;
            // member variable dataMemberName is reffered
            // to as this->dataMemberName
            // "dataMemberName" on the RHS is the parameter.
        dataMemberInitializedDynamically
                                    = new std::vector<std::string>();
    }

********************************************************************/
// Default Constructor
    triangle();

// Overloaded Constructor - Specifies centre and radius 
    //cercle(double radius_i, double x_i, double y_i);
    triangle(vector3D , vector3D , vector3D );

/********************************************************************
    Destructors are used to clean up ressources the object may have
    allocated during its lifetime such as memory and file handles.

    // Destructor
    ~example(){
        delete dataMemberInitializedDynamically;
        // Prevent memory leak by deallocating the dynamic vector
    }
********************************************************************/

    ~triangle();

/********************************************************************
    Methods that do not modify anything in the object are called
    "predicates"
    Predicates specify the keyword const after the parameter list of
    the methods
    Eg: return_type method_name(param_1, param_2, ...) const
    Compiler error if the an "action" is declared as "Predicate"
    assignment of data-member '. . .' in read-only structure
********************************************************************/
    // getters (accesseurs)
    // getters must always be marked const as they do not modify 
    // anything in the object

    vector3D getCoordinatesOfA() const;
    vector3D getCoordinatesOfB() const;
    vector3D getCoordinatesOfC() const;

/********************************************************************
    Methods: the header file contains the prototypes of methods
    Methods that modify the state of an object are called "actions"

********************************************************************/
   
// setters (manipulateurs)

//methods
// RULE: 1. Always mark methods const if they don't modify the object. 
//       2. Pass object by const reference unless you need to modify them. 
//       3. Use const with pointers when appropriate. 
private:
double length(const vector3D&, const vector3D&) const;

public:
double area(vector3D&, vector3D&) const;

double perimeter() const;

std::string triangleTypeBySide() const;

};//end-of-class-triangles

#endif
