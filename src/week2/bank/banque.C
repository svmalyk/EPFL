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
    banque.C
\*---------------------------------------------------------------------------*/
#include "banque.H"

 
// Default Constructor
    banque::banque() = default;

// Overloaded Constructor - Specifies centre and radius
    banque::banque(std::string name_i): 
                   bankName(name_i)       
    {
        // Create a Bank by giving it a name
    }

// destructeur
    banque::~banque() = default;

// getters

    std::string banque::getBankName() const {
        return bankName;
    }

    size_t banque::getNbOfClients() const{
    return accHolders.size();
    }

    double banque::getSavingBalance(client& accHolder){
        return accHolder.getSavingBalance();
    }
    
    double banque::getCurrentBalance(client& accHolder){
        return accHolder.getCurrentBalance();
    }

    double banque::getSavingInterestRate() const {
        return savingInterestRate;
    }

    double banque::getCurrentInterestRate() const {
        return currentInterestRate;
    }
    
    std::vector<client> banque::getAccountHolderList() const {
        return accHolders;
    }
    /*
    std::string banque::searchClientByID(int id) const {
        //TODO
    }    
    
    std::string banque::searchClientByName(std::string name) const {
        //TODO
    }
*/
// setters

// add client
    void banque::createClient(const client& accHolder) {
        accHolders.push_back(accHolder);
    }

    void banque::setSavingInterestRate(double rate){
        savingInterestRate=rate;
    }

    void banque::setCurrentInterestRate(double rate){
        currentInterestRate=rate;
    }
    

// open account

    void banque::openAccount(client& accHolder, double montantSavings, double montantCurrent){
        banque::createClient(accHolder);
        accHolder.setSavingBalance(montantSavings);
        accHolder.setCurrentBalance(montantCurrent);
    }


    void banque::bouclement(client& accHolder){
        accHolder.setSavingBalance(
            accHolder.getSavingBalance()*(1+savingInterestRate)
        );
        accHolder.setCurrentBalance(
            accHolder.getCurrentBalance()*(1+currentInterestRate)
        );
    }

   
// methods

    