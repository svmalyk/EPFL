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
    vehicule.C
\*---------------------------------------------------------------------------*/
#include "vehicule.H"

 
// Default Constructor
    

// Overloaded Constructor - 

  Vehicule::Vehicule(std::string marque_i, 
           int yearOfPurchase_i,  
           double purchaseAmount_i
          ): 
    marque_(marque_i),
    yearOfPurchase_(yearOfPurchase_i),
    purchaseAmount_(purchaseAmount_i)
    {}          

// destructeur
    Vehicule::~Vehicule() = default;

// getters

int Vehicule::get_current_year() {
  auto   now = std::chrono::system_clock::now();           
                            // 1. get time_point for now
  //auto today = std::chrono::time_point_cast<std::chrono::days>(now);  
  auto today = std::chrono::floor<std::chrono::days>(now);  
                            // 2. cast to time_point for today
  auto   ymd = std::chrono::year_month_day(today);         
                            // 3. convert to year_month_day 
  auto  year = ymd.year();                   
                            // 4. get year from year_month_day
  //std::cout << "Current year: " << year << "\n";                      
  return static_cast<int>(year);            
                            // 5. an explicit cast is required 
}
 
// setters

// methods



std::ostream& Vehicule::affiche(std::ostream& out) const{
    out << "marque : " << marque_ << ", "
        << "date d'achat : " << yearOfPurchase_ << ", "
        << "prix d'achat : " << purchaseAmount_ << std::endl;
    return out;
}


