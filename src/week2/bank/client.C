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
#include "client.H"
 
// Default Constructor
    client::client() = default;

// Overloaded Constructor - Specifies centre and radius
    client::client(std::string name_i, std::string city_i):
                   name(name_i),
                   city(city_i) 
    {
        std::cout << "Client : " <<  name; 
        std::cout << ", residing in " << city;
        std::cout << " is created." << std::endl;
    }

// destructeur
    client::~client() = default;

// getters

    std::string client::getName() const {
        return name;
    }

    std::string client::getCity() const {
        return city;
    }


    double client::getSavingBalance() const{
        return balanceSavingAcc;
    }

    double client::getCurrentBalance() const{
        return balanceCurrentAcc;
    }

// setters

    void client::setSavingBalance(double amount){
        balanceSavingAcc = amount;
    }
    
    void client::setCurrentBalance(double amount){
        balanceCurrentAcc = amount;
    }
// methods
