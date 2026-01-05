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
    achat.C
\*---------------------------------------------------------------------------*/
#include "achat.H"

 
// Default Constructor
    //achat::achat() = default;

// Overloaded Constructor - 
    Achat::Achat(const Article& article_i, int articleQuantity_i):
        article(article_i),
        articleQuantity(articleQuantity_i)
        {
            calculateMontantAchat();
            //std::cout << "Total achat = " << montantAchat << std::endl;
        }

    Achat::Achat(const Article& article_i):
        article(article_i)
        {
            calculateMontantAchat();
            //std::cout << "Total achat = " << montantAchat << std::endl;
        }

// destructeur
    Achat::~Achat() = default;

// getters
    Article Achat::getArticle() const{
        return article;
    }

 
    double Achat::getMontantAchat() const{
        return montantAchat;
    }  
// setters


   
// methods

    void Achat::calculateMontantAchat() {
        if(article.isDiscounted()){
           montantAchat = articleQuantity*article.getArticleRate()/2.0;
        }
        else{
            montantAchat =  articleQuantity*article.getArticleRate();
        };
    }

    void Achat::displayAchat() {
        std::cout << article.getArticleName()
                  << " : "
                  << article.getArticleRate() << " x " 
                  << articleQuantity << " = "
                  << montantAchat << " F";
        if(article.isDiscounted()){
           std::cout << " (en action)";
        };  
        std::cout << std::endl;
    }