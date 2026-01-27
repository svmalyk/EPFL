#include <iostream>
//#include <complex>
#include "../../lnInclude/week4/vehicule/vehicule.H"
#include "../../lnInclude/week4/vehicule/voiture.H"
#include "../../lnInclude/week4/vehicule/avion.H"

int main(){
    std::cout << "Running code vehicule" << std::endl;
std::vector<Voiture> garage;
std::vector<Avion> hangar;
garage.push_back(Voiture("Peugeot", 1998, 147325.79, 2.5, 5, 180.0,
12000));
garage.push_back(Voiture("Porsche", 1985, 250000.00, 6.5, 2, 280.0,
81320));
garage.push_back(Voiture("Fiat", 2001, 7327.30, 1.6, 3, 65.0,
3000));

hangar.push_back(Avion("Cessna", 1972, 1230673.90, "HELICES", 250));
hangar.push_back(Avion("Nain Connu", 1992, 4321098.00, "REACTION", 1300));
for (auto voiture : garage) {
voiture.calculePrix();
//std::cout << "Current rate : " << voiture.calculePrix() << std::endl;
voiture.affiche(std::cout);
}

for (auto avion : hangar) {
avion.calculePrix();
avion.affiche(std::cout);
}

return 0;

}//end-of-main

