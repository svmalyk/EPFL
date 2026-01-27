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
#include "vector.H"

// Constructors
    

// Default Constructor
   Vector::Vector() = default;

// Overloaded Constructor - Specifies the coordinates of the vector
    Vector::Vector(double x_i, double y_i, double z_i):
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

// A two-dimensional vector (z-coordinate = 0.0)
    Vector::Vector(double x_i, double y_i):
             x_coordinate(x_i),
             y_coordinate(y_i)
    {
        /*
        std::cout << "The x-coordinate of the point is "    
                  << x_coordinate << std::endl;
        std::cout << "and the y-coordinate of the point is " 
                  << y_coordinate << std::endl;
        */
    }
// destructeur
    Vector::~Vector() = default;

// getters
    void Vector::coordinates() const {
        std::cout << "(" << x_coordinate 
                  << "," << y_coordinate 
                  << "," << z_coordinate << ")";
    }

    double Vector::getXCoordinate() const {
        return x_coordinate;
    }

    double Vector::getYCoordinate() const {
        return y_coordinate;
    }

    double Vector::getZCoordinate() const {
        return z_coordinate;
    }

// setters


// methods
Vector& Vector::operator+=(const Vector& v){
    //std::cout << "adding to a vector" << std::endl;
    x_coordinate += v.x_coordinate;
    y_coordinate += v.y_coordinate;
    z_coordinate += v.z_coordinate;

    return *this;
}


Vector& Vector::operator-=(const Vector& v){
    //std::cout << "adding to a vector" << std::endl;
    x_coordinate -= v.x_coordinate;
    y_coordinate -= v.y_coordinate;
    z_coordinate -= v.z_coordinate;

    return *this;
}

    std::ostream& Vector::displayVector(std::ostream& out) const{
        out << "(" 
            << x_coordinate << ", "
            << y_coordinate << ", "
            << z_coordinate << ")";
        
        return out;
    }


    const Vector Vector::operator-() const{
        return Vector(-x_coordinate, 
                      -y_coordinate, 
                      -z_coordinate);
    }


    Vector& Vector::operator*=(double k){
        x_coordinate *= k;
        y_coordinate *= k;
        z_coordinate *= k;
        
        return *this;
    }

    double Vector::norm() const{
        return sqrt((*this) * (*this));
    }

    const Vector operator+(Vector v, const Vector& w){
        return v+=w;
    }

    const Vector operator-(Vector v, const Vector& w){
        return v-=w;
    }

    std::ostream& operator<<(std::ostream& out, const Vector& v){
       return v.displayVector(out);
    }

    const Vector operator*(Vector v, double k){
        return v *= k;
    }   

    const Vector operator*(double k, Vector v){
        return v *= k;
    }   


    double operator*(const Vector& v, const Vector& w){
        return (v.x_coordinate*w.x_coordinate +
                v.y_coordinate*w.y_coordinate +
                v.z_coordinate*w.z_coordinate);
    } 
 
    double angle(const Vector& v, const Vector& w){
        return acos((v * w) / (v.norm() * w.norm()));
    }